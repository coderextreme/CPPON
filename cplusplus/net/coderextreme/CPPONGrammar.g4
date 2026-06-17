grammar CPPONGrammar;

// --- LEXER RULES ---

WS_AND_NL : [ \t\r\n]+ -> channel(HIDDEN);

// Preprocessor directives and comments safely skipped by the lexer
COMMENT : '//' ~[\r\n]* -> skip;
CPPDIR  : '#' ~[\r\n]* -> skip;

IDENTIFIER : [A-Za-z_][A-Za-z0-9_]*;

REFERENCE : '&';
POINTER   : '*';
EQUALS    : '=';
SEMI      : ';';
COMMA     : ',';
DOT       : '.';

// Matches your method call style (".setProfile" -> SET + "Profile")
SET        : '.set';
X3DNODESET : '.X3DNode::set';
ADD        : '.add';

WHOLE    : [0-9]+;
SENTINEL : '-1';
FLOAT    : [-+]?([0-9]+[.]?|[0-9]*[.][0-9]+)([eE][-+]?[0-9]+)?;
TRUE     : [Tt][Rr][Uu][Ee];
FALSE    : [Ff][Aa][Ll][Ss][Ee];

OPENBRACE    : '{';
CLOSEBRACE   : '}';
OPENBRACKET  : '[';
CLOSEBRACKET : ']';
OPENPAREN    : '(';
CLOSEPAREN   : ')';

// Safely match strings, including escaped quotes like "\"../shaders/...\""
STRING : '"' ( '\\"' | '\\\\' | ~["\r\n\\] )*? '"';


// --- PARSER RULES ---

type : IDENTIFIER | 'std::string' | 'SFString' | 'CString' | 'bool' | 'int' | 'int32_t' | 'float' | 'double';

arraytype : 'new ' type OPENBRACKET CLOSEBRACKET
          | OPENPAREN type OPENBRACKET CLOSEBRACKET CLOSEPAREN
          | 'new ' type ;

// IDENTIFIER naturally captures trailing numbers (e.g. "X3D0", "Background9")
variable : IDENTIFIER;

// Backwards compatibility for your AST
string : STRING;

cstring : ( 'std::string' | 'SFString' | 'CString' ) OPENPAREN string CLOSEPAREN;

boolean_val  : TRUE | FALSE;
boolean_list : boolean_val (COMMA boolean_val)*;
integer_list : (SENTINEL | '-' WHOLE | '+'? WHOLE) (COMMA (SENTINEL | '-' WHOLE | '+'? WHOLE))*;
float_list   : FLOAT (COMMA FLOAT)*;
string_list  : string (COMMA string)*;

list : boolean_list | integer_list | float_list | string_list;

// Added optional list in case of empty array creations
construct_array : arraytype OPENBRACE list? CLOSEBRACE;

cast : OPENPAREN type POINTER? CLOSEPAREN;

// Generalized to allow ANY valid parameter to be passed into a function
parameter : cstring
          | string
          | cast? type? REFERENCE? variable
          | construct_array
          | SENTINEL
          | '-' WHOLE
          | '+'? WHOLE
          | FLOAT
          | boolean_val;

// Standard comma-separated argument lists (e.g. `(array, 2)`)
parameters : parameter (COMMA parameter)*;

operator : EQUALS | X3DNODESET | SET | ADD | DOT;

// E.g., `X3D0.setProfile("Immersive")` -> X3D0 (variable) + .set (operator) + Profile (IDENTIFIER)
funccall : variable operator IDENTIFIER OPENPAREN parameters? CLOSEPAREN;

construct : type POINTER? REFERENCE? funccall;

set_field : funccall;
add_field : funccall;

line : (construct | set_field | add_field) SEMI;

x3d : line* EOF;
