// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.2
// jshint ignore: start
import antlr4 from 'antlr4';
import CPPONGrammarListener from './CPPONGrammarListener.js';
import CPPONGrammarVisitor from './CPPONGrammarVisitor.js';

const serializedATN = [4,1,40,228,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,
4,2,5,7,5,2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,
2,13,7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,
20,7,20,2,21,7,21,2,22,7,22,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,3,1,62,8,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,
6,1,6,1,6,5,6,78,8,6,10,6,12,6,81,9,6,1,7,1,7,1,7,1,7,3,7,87,8,7,1,7,3,7,
90,8,7,1,7,1,7,1,7,1,7,1,7,3,7,97,8,7,1,7,3,7,100,8,7,5,7,102,8,7,10,7,12,
7,105,9,7,1,8,1,8,1,8,5,8,110,8,8,10,8,12,8,113,9,8,1,9,1,9,1,9,5,9,118,
8,9,10,9,12,9,121,9,9,1,10,1,10,1,10,1,10,3,10,127,8,10,1,11,1,11,1,11,3,
11,132,8,11,1,11,1,11,1,12,1,12,1,12,3,12,139,8,12,1,12,1,12,1,13,1,13,1,
13,1,13,3,13,147,8,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,
1,14,3,14,160,8,14,1,14,3,14,163,8,14,1,14,3,14,166,8,14,1,14,1,14,1,14,
1,14,1,14,1,14,3,14,174,8,14,1,14,1,14,1,14,3,14,179,8,14,1,15,1,15,1,15,
5,15,184,8,15,10,15,12,15,187,9,15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,3,
17,196,8,17,1,17,1,17,1,18,1,18,3,18,202,8,18,1,18,3,18,205,8,18,1,18,1,
18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,3,21,216,8,21,1,21,1,21,1,22,5,22,
221,8,22,10,22,12,22,224,9,22,1,22,1,22,1,22,0,0,23,0,2,4,6,8,10,12,14,16,
18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,5,2,0,1,8,22,22,1,0,1,3,1,0,
15,16,1,0,17,18,3,0,19,21,25,25,28,28,243,0,46,1,0,0,0,2,61,1,0,0,0,4,63,
1,0,0,0,6,65,1,0,0,0,8,67,1,0,0,0,10,72,1,0,0,0,12,74,1,0,0,0,14,89,1,0,
0,0,16,106,1,0,0,0,18,114,1,0,0,0,20,126,1,0,0,0,22,128,1,0,0,0,24,135,1,
0,0,0,26,142,1,0,0,0,28,178,1,0,0,0,30,180,1,0,0,0,32,188,1,0,0,0,34,190,
1,0,0,0,36,199,1,0,0,0,38,208,1,0,0,0,40,210,1,0,0,0,42,215,1,0,0,0,44,222,
1,0,0,0,46,47,7,0,0,0,47,1,1,0,0,0,48,49,5,14,0,0,49,50,3,0,0,0,50,51,5,
36,0,0,51,52,5,37,0,0,52,62,1,0,0,0,53,54,5,38,0,0,54,55,3,0,0,0,55,56,5,
36,0,0,56,57,5,37,0,0,57,58,5,39,0,0,58,62,1,0,0,0,59,60,5,14,0,0,60,62,
3,0,0,0,61,48,1,0,0,0,61,53,1,0,0,0,61,59,1,0,0,0,62,3,1,0,0,0,63,64,5,22,
0,0,64,5,1,0,0,0,65,66,5,40,0,0,66,7,1,0,0,0,67,68,7,1,0,0,68,69,5,38,0,
0,69,70,3,6,3,0,70,71,5,39,0,0,71,9,1,0,0,0,72,73,7,2,0,0,73,11,1,0,0,0,
74,79,3,10,5,0,75,76,5,27,0,0,76,78,3,10,5,0,77,75,1,0,0,0,78,81,1,0,0,0,
79,77,1,0,0,0,79,80,1,0,0,0,80,13,1,0,0,0,81,79,1,0,0,0,82,90,5,32,0,0,83,
84,5,9,0,0,84,90,5,31,0,0,85,87,5,10,0,0,86,85,1,0,0,0,86,87,1,0,0,0,87,
88,1,0,0,0,88,90,5,31,0,0,89,82,1,0,0,0,89,83,1,0,0,0,89,86,1,0,0,0,90,103,
1,0,0,0,91,99,5,27,0,0,92,100,5,32,0,0,93,94,5,9,0,0,94,100,5,31,0,0,95,
97,5,10,0,0,96,95,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,100,5,31,0,0,99,
92,1,0,0,0,99,93,1,0,0,0,99,96,1,0,0,0,100,102,1,0,0,0,101,91,1,0,0,0,102,
105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,15,1,0,0,0,105,103,1,0,0,
0,106,111,5,33,0,0,107,108,5,27,0,0,108,110,5,33,0,0,109,107,1,0,0,0,110,
113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,17,1,0,0,0,113,111,1,0,0,
0,114,119,3,6,3,0,115,116,5,27,0,0,116,118,3,6,3,0,117,115,1,0,0,0,118,121,
1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,19,1,0,0,0,121,119,1,0,0,0,122,
127,3,12,6,0,123,127,3,14,7,0,124,127,3,16,8,0,125,127,3,18,9,0,126,122,
1,0,0,0,126,123,1,0,0,0,126,124,1,0,0,0,126,125,1,0,0,0,127,21,1,0,0,0,128,
129,3,2,1,0,129,131,5,34,0,0,130,132,3,20,10,0,131,130,1,0,0,0,131,132,1,
0,0,0,132,133,1,0,0,0,133,134,5,35,0,0,134,23,1,0,0,0,135,136,5,38,0,0,136,
138,3,0,0,0,137,139,5,24,0,0,138,137,1,0,0,0,138,139,1,0,0,0,139,140,1,0,
0,0,140,141,5,39,0,0,141,25,1,0,0,0,142,143,7,3,0,0,143,144,5,29,0,0,144,
146,3,0,0,0,145,147,5,24,0,0,146,145,1,0,0,0,146,147,1,0,0,0,147,148,1,0,
0,0,148,149,5,30,0,0,149,150,5,38,0,0,150,151,3,28,14,0,151,152,5,39,0,0,
152,27,1,0,0,0,153,179,3,26,13,0,154,179,3,8,4,0,155,156,5,14,0,0,156,179,
3,8,4,0,157,179,3,6,3,0,158,160,3,24,12,0,159,158,1,0,0,0,159,160,1,0,0,
0,160,162,1,0,0,0,161,163,3,0,0,0,162,161,1,0,0,0,162,163,1,0,0,0,163,165,
1,0,0,0,164,166,5,23,0,0,165,164,1,0,0,0,165,166,1,0,0,0,166,167,1,0,0,0,
167,179,3,4,2,0,168,179,3,22,11,0,169,179,5,32,0,0,170,171,5,9,0,0,171,179,
5,31,0,0,172,174,5,10,0,0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,
0,175,179,5,31,0,0,176,179,5,33,0,0,177,179,3,10,5,0,178,153,1,0,0,0,178,
154,1,0,0,0,178,155,1,0,0,0,178,157,1,0,0,0,178,159,1,0,0,0,178,168,1,0,
0,0,178,169,1,0,0,0,178,170,1,0,0,0,178,173,1,0,0,0,178,176,1,0,0,0,178,
177,1,0,0,0,179,29,1,0,0,0,180,185,3,28,14,0,181,182,5,27,0,0,182,184,3,
28,14,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,0,0,
186,31,1,0,0,0,187,185,1,0,0,0,188,189,7,4,0,0,189,33,1,0,0,0,190,191,3,
4,2,0,191,192,3,32,16,0,192,193,5,22,0,0,193,195,5,38,0,0,194,196,3,30,15,
0,195,194,1,0,0,0,195,196,1,0,0,0,196,197,1,0,0,0,197,198,5,39,0,0,198,35,
1,0,0,0,199,201,3,0,0,0,200,202,5,24,0,0,201,200,1,0,0,0,201,202,1,0,0,0,
202,204,1,0,0,0,203,205,5,23,0,0,204,203,1,0,0,0,204,205,1,0,0,0,205,206,
1,0,0,0,206,207,3,34,17,0,207,37,1,0,0,0,208,209,3,34,17,0,209,39,1,0,0,
0,210,211,3,34,17,0,211,41,1,0,0,0,212,216,3,36,18,0,213,216,3,38,19,0,214,
216,3,40,20,0,215,212,1,0,0,0,215,213,1,0,0,0,215,214,1,0,0,0,216,217,1,
0,0,0,217,218,5,26,0,0,218,43,1,0,0,0,219,221,3,42,21,0,220,219,1,0,0,0,
221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,225,1,0,0,0,224,222,
1,0,0,0,225,226,5,0,0,1,226,45,1,0,0,0,24,61,79,86,89,96,99,103,111,119,
126,131,138,146,159,162,165,173,178,185,195,201,204,215,222];


const atn = new antlr4.atn.ATNDeserializer().deserialize(serializedATN);

const decisionsToDFA = atn.decisionToState.map( (ds, index) => new antlr4.dfa.DFA(ds, index) );

const sharedContextCache = new antlr4.atn.PredictionContextCache();

export default class CPPONGrammarParser extends antlr4.Parser {

    static grammarFileName = "CPPONGrammar.g4";
    static literalNames = [ null, "'std::string'", "'SFString'", "'CString'", 
                            "'bool'", "'int'", "'int32_t'", "'float'", "'double'", 
                            "'-'", "'+'", null, null, null, "'new'", null, 
                            null, "'static_cast'", "'dynamic_cast'", "'.set'", 
                            "'.X3DNode::set'", "'.add'", null, "'&'", "'*'", 
                            "'='", "';'", "','", "'.'", "'<'", "'>'", null, 
                            "'-1'", null, "'{'", "'}'", "'['", "']'", "'('", 
                            "')'" ];
    static symbolicNames = [ null, null, null, null, null, null, null, null, 
                             null, null, null, "WS_AND_NL", "COMMENT", "CPPDIR", 
                             "NEW", "TRUE", "FALSE", "STATIC_CAST", "DYNAMIC_CAST", 
                             "SET", "X3DNODESET", "ADD", "IDENTIFIER", "REFERENCE", 
                             "POINTER", "EQUALS", "SEMI", "COMMA", "DOT", 
                             "LT", "GT", "WHOLE", "SENTINEL", "FLOAT", "OPENBRACE", 
                             "CLOSEBRACE", "OPENBRACKET", "CLOSEBRACKET", 
                             "OPENPAREN", "CLOSEPAREN", "STRING" ];
    static ruleNames = [ "type", "arraytype", "variable", "string", "cstring", 
                         "boolean_val", "boolean_list", "integer_list", 
                         "float_list", "string_list", "list", "construct_array", 
                         "cast", "cpp_cast", "parameter", "parameters", 
                         "operator", "funccall", "construct", "set_field", 
                         "add_field", "line", "x3d" ];

    constructor(input) {
        super(input);
        this._interp = new antlr4.atn.ParserATNSimulator(this, atn, decisionsToDFA, sharedContextCache);
        this.ruleNames = CPPONGrammarParser.ruleNames;
        this.literalNames = CPPONGrammarParser.literalNames;
        this.symbolicNames = CPPONGrammarParser.symbolicNames;
    }



	type() {
	    let localctx = new TypeContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 0, CPPONGrammarParser.RULE_type);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 46;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) === 0 && ((1 << _la) & 4194814) !== 0))) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	arraytype() {
	    let localctx = new ArraytypeContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 2, CPPONGrammarParser.RULE_arraytype);
	    try {
	        this.state = 61;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,0,this._ctx);
	        switch(la_) {
	        case 1:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 48;
	            this.match(CPPONGrammarParser.NEW);
	            this.state = 49;
	            this.type();
	            this.state = 50;
	            this.match(CPPONGrammarParser.OPENBRACKET);
	            this.state = 51;
	            this.match(CPPONGrammarParser.CLOSEBRACKET);
	            break;

	        case 2:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 53;
	            this.match(CPPONGrammarParser.OPENPAREN);
	            this.state = 54;
	            this.type();
	            this.state = 55;
	            this.match(CPPONGrammarParser.OPENBRACKET);
	            this.state = 56;
	            this.match(CPPONGrammarParser.CLOSEBRACKET);
	            this.state = 57;
	            this.match(CPPONGrammarParser.CLOSEPAREN);
	            break;

	        case 3:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 59;
	            this.match(CPPONGrammarParser.NEW);
	            this.state = 60;
	            this.type();
	            break;

	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	variable() {
	    let localctx = new VariableContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 4, CPPONGrammarParser.RULE_variable);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 63;
	        this.match(CPPONGrammarParser.IDENTIFIER);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	string() {
	    let localctx = new StringContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 6, CPPONGrammarParser.RULE_string);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 65;
	        this.match(CPPONGrammarParser.STRING);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	cstring() {
	    let localctx = new CstringContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 8, CPPONGrammarParser.RULE_cstring);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 67;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) === 0 && ((1 << _la) & 14) !== 0))) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	        this.state = 68;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 69;
	        this.string();
	        this.state = 70;
	        this.match(CPPONGrammarParser.CLOSEPAREN);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	boolean_val() {
	    let localctx = new Boolean_valContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 10, CPPONGrammarParser.RULE_boolean_val);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 72;
	        _la = this._input.LA(1);
	        if(!(_la===15 || _la===16)) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	boolean_list() {
	    let localctx = new Boolean_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 12, CPPONGrammarParser.RULE_boolean_list);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 74;
	        this.boolean_val();
	        this.state = 79;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===27) {
	            this.state = 75;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 76;
	            this.boolean_val();
	            this.state = 81;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	integer_list() {
	    let localctx = new Integer_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 14, CPPONGrammarParser.RULE_integer_list);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 89;
	        this._errHandler.sync(this);
	        switch(this._input.LA(1)) {
	        case 32:
	            this.state = 82;
	            this.match(CPPONGrammarParser.SENTINEL);
	            break;
	        case 9:
	            this.state = 83;
	            this.match(CPPONGrammarParser.T__8);
	            this.state = 84;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;
	        case 10:
	        case 31:
	            this.state = 86;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===10) {
	                this.state = 85;
	                this.match(CPPONGrammarParser.T__9);
	            }

	            this.state = 88;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;
	        default:
	            throw new antlr4.error.NoViableAltException(this);
	        }
	        this.state = 103;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===27) {
	            this.state = 91;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 99;
	            this._errHandler.sync(this);
	            switch(this._input.LA(1)) {
	            case 32:
	                this.state = 92;
	                this.match(CPPONGrammarParser.SENTINEL);
	                break;
	            case 9:
	                this.state = 93;
	                this.match(CPPONGrammarParser.T__8);
	                this.state = 94;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            case 10:
	            case 31:
	                this.state = 96;
	                this._errHandler.sync(this);
	                _la = this._input.LA(1);
	                if(_la===10) {
	                    this.state = 95;
	                    this.match(CPPONGrammarParser.T__9);
	                }

	                this.state = 98;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            default:
	                throw new antlr4.error.NoViableAltException(this);
	            }
	            this.state = 105;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	float_list() {
	    let localctx = new Float_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 16, CPPONGrammarParser.RULE_float_list);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 106;
	        this.match(CPPONGrammarParser.FLOAT);
	        this.state = 111;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===27) {
	            this.state = 107;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 108;
	            this.match(CPPONGrammarParser.FLOAT);
	            this.state = 113;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	string_list() {
	    let localctx = new String_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 18, CPPONGrammarParser.RULE_string_list);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 114;
	        this.string();
	        this.state = 119;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===27) {
	            this.state = 115;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 116;
	            this.string();
	            this.state = 121;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	list() {
	    let localctx = new ListContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 20, CPPONGrammarParser.RULE_list);
	    try {
	        this.state = 126;
	        this._errHandler.sync(this);
	        switch(this._input.LA(1)) {
	        case 15:
	        case 16:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 122;
	            this.boolean_list();
	            break;
	        case 9:
	        case 10:
	        case 31:
	        case 32:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 123;
	            this.integer_list();
	            break;
	        case 33:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 124;
	            this.float_list();
	            break;
	        case 40:
	            this.enterOuterAlt(localctx, 4);
	            this.state = 125;
	            this.string_list();
	            break;
	        default:
	            throw new antlr4.error.NoViableAltException(this);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	construct_array() {
	    let localctx = new Construct_arrayContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 22, CPPONGrammarParser.RULE_construct_array);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 128;
	        this.arraytype();
	        this.state = 129;
	        this.match(CPPONGrammarParser.OPENBRACE);
	        this.state = 131;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(((((_la - 9)) & ~0x1f) === 0 && ((1 << (_la - 9)) & 2176843971) !== 0)) {
	            this.state = 130;
	            this.list();
	        }

	        this.state = 133;
	        this.match(CPPONGrammarParser.CLOSEBRACE);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	cast() {
	    let localctx = new CastContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 24, CPPONGrammarParser.RULE_cast);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 135;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 136;
	        this.type();
	        this.state = 138;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===24) {
	            this.state = 137;
	            this.match(CPPONGrammarParser.POINTER);
	        }

	        this.state = 140;
	        this.match(CPPONGrammarParser.CLOSEPAREN);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	cpp_cast() {
	    let localctx = new Cpp_castContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 26, CPPONGrammarParser.RULE_cpp_cast);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 142;
	        _la = this._input.LA(1);
	        if(!(_la===17 || _la===18)) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	        this.state = 143;
	        this.match(CPPONGrammarParser.LT);
	        this.state = 144;
	        this.type();
	        this.state = 146;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===24) {
	            this.state = 145;
	            this.match(CPPONGrammarParser.POINTER);
	        }

	        this.state = 148;
	        this.match(CPPONGrammarParser.GT);
	        this.state = 149;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 150;
	        this.parameter();
	        this.state = 151;
	        this.match(CPPONGrammarParser.CLOSEPAREN);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	parameter() {
	    let localctx = new ParameterContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 28, CPPONGrammarParser.RULE_parameter);
	    var _la = 0;
	    try {
	        this.state = 178;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,17,this._ctx);
	        switch(la_) {
	        case 1:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 153;
	            this.cpp_cast();
	            break;

	        case 2:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 154;
	            this.cstring();
	            break;

	        case 3:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 155;
	            this.match(CPPONGrammarParser.NEW);
	            this.state = 156;
	            this.cstring();
	            break;

	        case 4:
	            this.enterOuterAlt(localctx, 4);
	            this.state = 157;
	            this.string();
	            break;

	        case 5:
	            this.enterOuterAlt(localctx, 5);
	            this.state = 159;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===38) {
	                this.state = 158;
	                this.cast();
	            }

	            this.state = 162;
	            this._errHandler.sync(this);
	            var la_ = this._interp.adaptivePredict(this._input,14,this._ctx);
	            if(la_===1) {
	                this.state = 161;
	                this.type();

	            }
	            this.state = 165;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===23) {
	                this.state = 164;
	                this.match(CPPONGrammarParser.REFERENCE);
	            }

	            this.state = 167;
	            this.variable();
	            break;

	        case 6:
	            this.enterOuterAlt(localctx, 6);
	            this.state = 168;
	            this.construct_array();
	            break;

	        case 7:
	            this.enterOuterAlt(localctx, 7);
	            this.state = 169;
	            this.match(CPPONGrammarParser.SENTINEL);
	            break;

	        case 8:
	            this.enterOuterAlt(localctx, 8);
	            this.state = 170;
	            this.match(CPPONGrammarParser.T__8);
	            this.state = 171;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;

	        case 9:
	            this.enterOuterAlt(localctx, 9);
	            this.state = 173;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===10) {
	                this.state = 172;
	                this.match(CPPONGrammarParser.T__9);
	            }

	            this.state = 175;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;

	        case 10:
	            this.enterOuterAlt(localctx, 10);
	            this.state = 176;
	            this.match(CPPONGrammarParser.FLOAT);
	            break;

	        case 11:
	            this.enterOuterAlt(localctx, 11);
	            this.state = 177;
	            this.boolean_val();
	            break;

	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	parameters() {
	    let localctx = new ParametersContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 30, CPPONGrammarParser.RULE_parameters);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 180;
	        this.parameter();
	        this.state = 185;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===27) {
	            this.state = 181;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 182;
	            this.parameter();
	            this.state = 187;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	operator() {
	    let localctx = new OperatorContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 32, CPPONGrammarParser.RULE_operator);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 188;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) === 0 && ((1 << _la) & 305659904) !== 0))) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	funccall() {
	    let localctx = new FunccallContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 34, CPPONGrammarParser.RULE_funccall);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 190;
	        this.variable();
	        this.state = 191;
	        this.operator();
	        this.state = 192;
	        this.match(CPPONGrammarParser.IDENTIFIER);
	        this.state = 193;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 195;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if((((_la) & ~0x1f) === 0 && ((1 << _la) & 2160576510) !== 0) || ((((_la - 32)) & ~0x1f) === 0 && ((1 << (_la - 32)) & 323) !== 0)) {
	            this.state = 194;
	            this.parameters();
	        }

	        this.state = 197;
	        this.match(CPPONGrammarParser.CLOSEPAREN);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	construct() {
	    let localctx = new ConstructContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 36, CPPONGrammarParser.RULE_construct);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 199;
	        this.type();
	        this.state = 201;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===24) {
	            this.state = 200;
	            this.match(CPPONGrammarParser.POINTER);
	        }

	        this.state = 204;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===23) {
	            this.state = 203;
	            this.match(CPPONGrammarParser.REFERENCE);
	        }

	        this.state = 206;
	        this.funccall();
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	set_field() {
	    let localctx = new Set_fieldContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 38, CPPONGrammarParser.RULE_set_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 208;
	        this.funccall();
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	add_field() {
	    let localctx = new Add_fieldContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 40, CPPONGrammarParser.RULE_add_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 210;
	        this.funccall();
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	line() {
	    let localctx = new LineContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 42, CPPONGrammarParser.RULE_line);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 215;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,22,this._ctx);
	        switch(la_) {
	        case 1:
	            this.state = 212;
	            this.construct();
	            break;

	        case 2:
	            this.state = 213;
	            this.set_field();
	            break;

	        case 3:
	            this.state = 214;
	            this.add_field();
	            break;

	        }
	        this.state = 217;
	        this.match(CPPONGrammarParser.SEMI);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	x3d() {
	    let localctx = new X3dContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 44, CPPONGrammarParser.RULE_x3d);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 222;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while((((_la) & ~0x1f) === 0 && ((1 << _la) & 4194814) !== 0)) {
	            this.state = 219;
	            this.line();
	            this.state = 224;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	        this.state = 225;
	        this.match(CPPONGrammarParser.EOF);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}


}

CPPONGrammarParser.EOF = antlr4.Token.EOF;
CPPONGrammarParser.T__0 = 1;
CPPONGrammarParser.T__1 = 2;
CPPONGrammarParser.T__2 = 3;
CPPONGrammarParser.T__3 = 4;
CPPONGrammarParser.T__4 = 5;
CPPONGrammarParser.T__5 = 6;
CPPONGrammarParser.T__6 = 7;
CPPONGrammarParser.T__7 = 8;
CPPONGrammarParser.T__8 = 9;
CPPONGrammarParser.T__9 = 10;
CPPONGrammarParser.WS_AND_NL = 11;
CPPONGrammarParser.COMMENT = 12;
CPPONGrammarParser.CPPDIR = 13;
CPPONGrammarParser.NEW = 14;
CPPONGrammarParser.TRUE = 15;
CPPONGrammarParser.FALSE = 16;
CPPONGrammarParser.STATIC_CAST = 17;
CPPONGrammarParser.DYNAMIC_CAST = 18;
CPPONGrammarParser.SET = 19;
CPPONGrammarParser.X3DNODESET = 20;
CPPONGrammarParser.ADD = 21;
CPPONGrammarParser.IDENTIFIER = 22;
CPPONGrammarParser.REFERENCE = 23;
CPPONGrammarParser.POINTER = 24;
CPPONGrammarParser.EQUALS = 25;
CPPONGrammarParser.SEMI = 26;
CPPONGrammarParser.COMMA = 27;
CPPONGrammarParser.DOT = 28;
CPPONGrammarParser.LT = 29;
CPPONGrammarParser.GT = 30;
CPPONGrammarParser.WHOLE = 31;
CPPONGrammarParser.SENTINEL = 32;
CPPONGrammarParser.FLOAT = 33;
CPPONGrammarParser.OPENBRACE = 34;
CPPONGrammarParser.CLOSEBRACE = 35;
CPPONGrammarParser.OPENBRACKET = 36;
CPPONGrammarParser.CLOSEBRACKET = 37;
CPPONGrammarParser.OPENPAREN = 38;
CPPONGrammarParser.CLOSEPAREN = 39;
CPPONGrammarParser.STRING = 40;

CPPONGrammarParser.RULE_type = 0;
CPPONGrammarParser.RULE_arraytype = 1;
CPPONGrammarParser.RULE_variable = 2;
CPPONGrammarParser.RULE_string = 3;
CPPONGrammarParser.RULE_cstring = 4;
CPPONGrammarParser.RULE_boolean_val = 5;
CPPONGrammarParser.RULE_boolean_list = 6;
CPPONGrammarParser.RULE_integer_list = 7;
CPPONGrammarParser.RULE_float_list = 8;
CPPONGrammarParser.RULE_string_list = 9;
CPPONGrammarParser.RULE_list = 10;
CPPONGrammarParser.RULE_construct_array = 11;
CPPONGrammarParser.RULE_cast = 12;
CPPONGrammarParser.RULE_cpp_cast = 13;
CPPONGrammarParser.RULE_parameter = 14;
CPPONGrammarParser.RULE_parameters = 15;
CPPONGrammarParser.RULE_operator = 16;
CPPONGrammarParser.RULE_funccall = 17;
CPPONGrammarParser.RULE_construct = 18;
CPPONGrammarParser.RULE_set_field = 19;
CPPONGrammarParser.RULE_add_field = 20;
CPPONGrammarParser.RULE_line = 21;
CPPONGrammarParser.RULE_x3d = 22;

class TypeContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_type;
    }

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterType(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitType(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitType(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ArraytypeContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_arraytype;
    }

	NEW() {
	    return this.getToken(CPPONGrammarParser.NEW, 0);
	};

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	OPENBRACKET() {
	    return this.getToken(CPPONGrammarParser.OPENBRACKET, 0);
	};

	CLOSEBRACKET() {
	    return this.getToken(CPPONGrammarParser.CLOSEBRACKET, 0);
	};

	OPENPAREN() {
	    return this.getToken(CPPONGrammarParser.OPENPAREN, 0);
	};

	CLOSEPAREN() {
	    return this.getToken(CPPONGrammarParser.CLOSEPAREN, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterArraytype(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitArraytype(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitArraytype(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class VariableContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_variable;
    }

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterVariable(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitVariable(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitVariable(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class StringContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_string;
    }

	STRING() {
	    return this.getToken(CPPONGrammarParser.STRING, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterString(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitString(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitString(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class CstringContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_cstring;
    }

	OPENPAREN() {
	    return this.getToken(CPPONGrammarParser.OPENPAREN, 0);
	};

	string() {
	    return this.getTypedRuleContext(StringContext,0);
	};

	CLOSEPAREN() {
	    return this.getToken(CPPONGrammarParser.CLOSEPAREN, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterCstring(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitCstring(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitCstring(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Boolean_valContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_boolean_val;
    }

	TRUE() {
	    return this.getToken(CPPONGrammarParser.TRUE, 0);
	};

	FALSE() {
	    return this.getToken(CPPONGrammarParser.FALSE, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterBoolean_val(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitBoolean_val(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitBoolean_val(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Boolean_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_boolean_list;
    }

	boolean_val = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(Boolean_valContext);
	    } else {
	        return this.getTypedRuleContext(Boolean_valContext,i);
	    }
	};

	COMMA = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.COMMA);
	    } else {
	        return this.getToken(CPPONGrammarParser.COMMA, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterBoolean_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitBoolean_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitBoolean_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Integer_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_integer_list;
    }

	SENTINEL = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.SENTINEL);
	    } else {
	        return this.getToken(CPPONGrammarParser.SENTINEL, i);
	    }
	};


	WHOLE = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.WHOLE);
	    } else {
	        return this.getToken(CPPONGrammarParser.WHOLE, i);
	    }
	};


	COMMA = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.COMMA);
	    } else {
	        return this.getToken(CPPONGrammarParser.COMMA, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterInteger_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitInteger_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitInteger_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Float_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_float_list;
    }

	FLOAT = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.FLOAT);
	    } else {
	        return this.getToken(CPPONGrammarParser.FLOAT, i);
	    }
	};


	COMMA = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.COMMA);
	    } else {
	        return this.getToken(CPPONGrammarParser.COMMA, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterFloat_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitFloat_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitFloat_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class String_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_string_list;
    }

	string = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(StringContext);
	    } else {
	        return this.getTypedRuleContext(StringContext,i);
	    }
	};

	COMMA = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.COMMA);
	    } else {
	        return this.getToken(CPPONGrammarParser.COMMA, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterString_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitString_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitString_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ListContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_list;
    }

	boolean_list() {
	    return this.getTypedRuleContext(Boolean_listContext,0);
	};

	integer_list() {
	    return this.getTypedRuleContext(Integer_listContext,0);
	};

	float_list() {
	    return this.getTypedRuleContext(Float_listContext,0);
	};

	string_list() {
	    return this.getTypedRuleContext(String_listContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterList(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitList(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitList(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Construct_arrayContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_construct_array;
    }

	arraytype() {
	    return this.getTypedRuleContext(ArraytypeContext,0);
	};

	OPENBRACE() {
	    return this.getToken(CPPONGrammarParser.OPENBRACE, 0);
	};

	CLOSEBRACE() {
	    return this.getToken(CPPONGrammarParser.CLOSEBRACE, 0);
	};

	list() {
	    return this.getTypedRuleContext(ListContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterConstruct_array(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitConstruct_array(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitConstruct_array(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class CastContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_cast;
    }

	OPENPAREN() {
	    return this.getToken(CPPONGrammarParser.OPENPAREN, 0);
	};

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	CLOSEPAREN() {
	    return this.getToken(CPPONGrammarParser.CLOSEPAREN, 0);
	};

	POINTER() {
	    return this.getToken(CPPONGrammarParser.POINTER, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterCast(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitCast(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitCast(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Cpp_castContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_cpp_cast;
    }

	LT() {
	    return this.getToken(CPPONGrammarParser.LT, 0);
	};

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	GT() {
	    return this.getToken(CPPONGrammarParser.GT, 0);
	};

	OPENPAREN() {
	    return this.getToken(CPPONGrammarParser.OPENPAREN, 0);
	};

	parameter() {
	    return this.getTypedRuleContext(ParameterContext,0);
	};

	CLOSEPAREN() {
	    return this.getToken(CPPONGrammarParser.CLOSEPAREN, 0);
	};

	STATIC_CAST() {
	    return this.getToken(CPPONGrammarParser.STATIC_CAST, 0);
	};

	DYNAMIC_CAST() {
	    return this.getToken(CPPONGrammarParser.DYNAMIC_CAST, 0);
	};

	POINTER() {
	    return this.getToken(CPPONGrammarParser.POINTER, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterCpp_cast(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitCpp_cast(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitCpp_cast(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ParameterContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_parameter;
    }

	cpp_cast() {
	    return this.getTypedRuleContext(Cpp_castContext,0);
	};

	cstring() {
	    return this.getTypedRuleContext(CstringContext,0);
	};

	NEW() {
	    return this.getToken(CPPONGrammarParser.NEW, 0);
	};

	string() {
	    return this.getTypedRuleContext(StringContext,0);
	};

	variable() {
	    return this.getTypedRuleContext(VariableContext,0);
	};

	cast() {
	    return this.getTypedRuleContext(CastContext,0);
	};

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	REFERENCE() {
	    return this.getToken(CPPONGrammarParser.REFERENCE, 0);
	};

	construct_array() {
	    return this.getTypedRuleContext(Construct_arrayContext,0);
	};

	SENTINEL() {
	    return this.getToken(CPPONGrammarParser.SENTINEL, 0);
	};

	WHOLE() {
	    return this.getToken(CPPONGrammarParser.WHOLE, 0);
	};

	FLOAT() {
	    return this.getToken(CPPONGrammarParser.FLOAT, 0);
	};

	boolean_val() {
	    return this.getTypedRuleContext(Boolean_valContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterParameter(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitParameter(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitParameter(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ParametersContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_parameters;
    }

	parameter = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(ParameterContext);
	    } else {
	        return this.getTypedRuleContext(ParameterContext,i);
	    }
	};

	COMMA = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.COMMA);
	    } else {
	        return this.getToken(CPPONGrammarParser.COMMA, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterParameters(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitParameters(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitParameters(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class OperatorContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_operator;
    }

	EQUALS() {
	    return this.getToken(CPPONGrammarParser.EQUALS, 0);
	};

	X3DNODESET() {
	    return this.getToken(CPPONGrammarParser.X3DNODESET, 0);
	};

	SET() {
	    return this.getToken(CPPONGrammarParser.SET, 0);
	};

	ADD() {
	    return this.getToken(CPPONGrammarParser.ADD, 0);
	};

	DOT() {
	    return this.getToken(CPPONGrammarParser.DOT, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterOperator(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitOperator(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitOperator(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class FunccallContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_funccall;
    }

	variable() {
	    return this.getTypedRuleContext(VariableContext,0);
	};

	operator() {
	    return this.getTypedRuleContext(OperatorContext,0);
	};

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	OPENPAREN() {
	    return this.getToken(CPPONGrammarParser.OPENPAREN, 0);
	};

	CLOSEPAREN() {
	    return this.getToken(CPPONGrammarParser.CLOSEPAREN, 0);
	};

	parameters() {
	    return this.getTypedRuleContext(ParametersContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterFunccall(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitFunccall(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitFunccall(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ConstructContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_construct;
    }

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	funccall() {
	    return this.getTypedRuleContext(FunccallContext,0);
	};

	POINTER() {
	    return this.getToken(CPPONGrammarParser.POINTER, 0);
	};

	REFERENCE() {
	    return this.getToken(CPPONGrammarParser.REFERENCE, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterConstruct(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitConstruct(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitConstruct(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Set_fieldContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_set_field;
    }

	funccall() {
	    return this.getTypedRuleContext(FunccallContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterSet_field(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitSet_field(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitSet_field(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Add_fieldContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_add_field;
    }

	funccall() {
	    return this.getTypedRuleContext(FunccallContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterAdd_field(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitAdd_field(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitAdd_field(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class LineContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_line;
    }

	SEMI() {
	    return this.getToken(CPPONGrammarParser.SEMI, 0);
	};

	construct() {
	    return this.getTypedRuleContext(ConstructContext,0);
	};

	set_field() {
	    return this.getTypedRuleContext(Set_fieldContext,0);
	};

	add_field() {
	    return this.getTypedRuleContext(Add_fieldContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterLine(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitLine(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitLine(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class X3dContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_x3d;
    }

	EOF() {
	    return this.getToken(CPPONGrammarParser.EOF, 0);
	};

	line = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(LineContext);
	    } else {
	        return this.getTypedRuleContext(LineContext,i);
	    }
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterX3d(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitX3d(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitX3d(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}




CPPONGrammarParser.TypeContext = TypeContext; 
CPPONGrammarParser.ArraytypeContext = ArraytypeContext; 
CPPONGrammarParser.VariableContext = VariableContext; 
CPPONGrammarParser.StringContext = StringContext; 
CPPONGrammarParser.CstringContext = CstringContext; 
CPPONGrammarParser.Boolean_valContext = Boolean_valContext; 
CPPONGrammarParser.Boolean_listContext = Boolean_listContext; 
CPPONGrammarParser.Integer_listContext = Integer_listContext; 
CPPONGrammarParser.Float_listContext = Float_listContext; 
CPPONGrammarParser.String_listContext = String_listContext; 
CPPONGrammarParser.ListContext = ListContext; 
CPPONGrammarParser.Construct_arrayContext = Construct_arrayContext; 
CPPONGrammarParser.CastContext = CastContext; 
CPPONGrammarParser.Cpp_castContext = Cpp_castContext; 
CPPONGrammarParser.ParameterContext = ParameterContext; 
CPPONGrammarParser.ParametersContext = ParametersContext; 
CPPONGrammarParser.OperatorContext = OperatorContext; 
CPPONGrammarParser.FunccallContext = FunccallContext; 
CPPONGrammarParser.ConstructContext = ConstructContext; 
CPPONGrammarParser.Set_fieldContext = Set_fieldContext; 
CPPONGrammarParser.Add_fieldContext = Add_fieldContext; 
CPPONGrammarParser.LineContext = LineContext; 
CPPONGrammarParser.X3dContext = X3dContext; 
