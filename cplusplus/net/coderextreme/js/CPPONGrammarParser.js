// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.2
// jshint ignore: start
import antlr4 from 'antlr4';
import CPPONGrammarListener from './CPPONGrammarListener.js';
import CPPONGrammarVisitor from './CPPONGrammarVisitor.js';

const serializedATN = [4,1,36,212,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,
4,2,5,7,5,2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,
2,13,7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,
20,7,20,2,21,7,21,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,3,1,60,8,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,
5,6,76,8,6,10,6,12,6,79,9,6,1,7,1,7,1,7,1,7,3,7,85,8,7,1,7,3,7,88,8,7,1,
7,1,7,1,7,1,7,1,7,3,7,95,8,7,1,7,3,7,98,8,7,5,7,100,8,7,10,7,12,7,103,9,
7,1,8,1,8,1,8,5,8,108,8,8,10,8,12,8,111,9,8,1,9,1,9,1,9,5,9,116,8,9,10,9,
12,9,119,9,9,1,10,1,10,1,10,1,10,3,10,125,8,10,1,11,1,11,1,11,3,11,130,8,
11,1,11,1,11,1,12,1,12,1,12,3,12,137,8,12,1,12,1,12,1,13,1,13,1,13,3,13,
144,8,13,1,13,3,13,147,8,13,1,13,3,13,150,8,13,1,13,1,13,1,13,1,13,1,13,
1,13,3,13,158,8,13,1,13,1,13,1,13,3,13,163,8,13,1,14,1,14,1,14,5,14,168,
8,14,10,14,12,14,171,9,14,1,15,1,15,1,16,1,16,1,16,1,16,1,16,3,16,180,8,
16,1,16,1,16,1,17,1,17,3,17,186,8,17,1,17,3,17,189,8,17,1,17,1,17,1,18,1,
18,1,19,1,19,1,20,1,20,1,20,3,20,200,8,20,1,20,1,20,1,21,5,21,205,8,21,10,
21,12,21,208,9,21,1,21,1,21,1,21,0,0,22,0,2,4,6,8,10,12,14,16,18,20,22,24,
26,28,30,32,34,36,38,40,42,0,4,2,0,1,8,15,15,1,0,1,3,1,0,28,29,2,0,18,18,
21,24,225,0,44,1,0,0,0,2,59,1,0,0,0,4,61,1,0,0,0,6,63,1,0,0,0,8,65,1,0,0,
0,10,70,1,0,0,0,12,72,1,0,0,0,14,87,1,0,0,0,16,104,1,0,0,0,18,112,1,0,0,
0,20,124,1,0,0,0,22,126,1,0,0,0,24,133,1,0,0,0,26,162,1,0,0,0,28,164,1,0,
0,0,30,172,1,0,0,0,32,174,1,0,0,0,34,183,1,0,0,0,36,192,1,0,0,0,38,194,1,
0,0,0,40,199,1,0,0,0,42,206,1,0,0,0,44,45,7,0,0,0,45,1,1,0,0,0,46,47,5,9,
0,0,47,48,3,0,0,0,48,49,5,32,0,0,49,50,5,33,0,0,50,60,1,0,0,0,51,52,5,34,
0,0,52,53,3,0,0,0,53,54,5,32,0,0,54,55,5,33,0,0,55,56,5,35,0,0,56,60,1,0,
0,0,57,58,5,9,0,0,58,60,3,0,0,0,59,46,1,0,0,0,59,51,1,0,0,0,59,57,1,0,0,
0,60,3,1,0,0,0,61,62,5,15,0,0,62,5,1,0,0,0,63,64,5,36,0,0,64,7,1,0,0,0,65,
66,7,1,0,0,66,67,5,34,0,0,67,68,3,6,3,0,68,69,5,35,0,0,69,9,1,0,0,0,70,71,
7,2,0,0,71,11,1,0,0,0,72,77,3,10,5,0,73,74,5,20,0,0,74,76,3,10,5,0,75,73,
1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,13,1,0,0,0,79,77,1,
0,0,0,80,88,5,26,0,0,81,82,5,10,0,0,82,88,5,25,0,0,83,85,5,11,0,0,84,83,
1,0,0,0,84,85,1,0,0,0,85,86,1,0,0,0,86,88,5,25,0,0,87,80,1,0,0,0,87,81,1,
0,0,0,87,84,1,0,0,0,88,101,1,0,0,0,89,97,5,20,0,0,90,98,5,26,0,0,91,92,5,
10,0,0,92,98,5,25,0,0,93,95,5,11,0,0,94,93,1,0,0,0,94,95,1,0,0,0,95,96,1,
0,0,0,96,98,5,25,0,0,97,90,1,0,0,0,97,91,1,0,0,0,97,94,1,0,0,0,98,100,1,
0,0,0,99,89,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,15,
1,0,0,0,103,101,1,0,0,0,104,109,5,27,0,0,105,106,5,20,0,0,106,108,5,27,0,
0,107,105,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,17,
1,0,0,0,111,109,1,0,0,0,112,117,3,6,3,0,113,114,5,20,0,0,114,116,3,6,3,0,
115,113,1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,19,1,
0,0,0,119,117,1,0,0,0,120,125,3,12,6,0,121,125,3,14,7,0,122,125,3,16,8,0,
123,125,3,18,9,0,124,120,1,0,0,0,124,121,1,0,0,0,124,122,1,0,0,0,124,123,
1,0,0,0,125,21,1,0,0,0,126,127,3,2,1,0,127,129,5,30,0,0,128,130,3,20,10,
0,129,128,1,0,0,0,129,130,1,0,0,0,130,131,1,0,0,0,131,132,5,31,0,0,132,23,
1,0,0,0,133,134,5,34,0,0,134,136,3,0,0,0,135,137,5,17,0,0,136,135,1,0,0,
0,136,137,1,0,0,0,137,138,1,0,0,0,138,139,5,35,0,0,139,25,1,0,0,0,140,163,
3,8,4,0,141,163,3,6,3,0,142,144,3,24,12,0,143,142,1,0,0,0,143,144,1,0,0,
0,144,146,1,0,0,0,145,147,3,0,0,0,146,145,1,0,0,0,146,147,1,0,0,0,147,149,
1,0,0,0,148,150,5,16,0,0,149,148,1,0,0,0,149,150,1,0,0,0,150,151,1,0,0,0,
151,163,3,4,2,0,152,163,3,22,11,0,153,163,5,26,0,0,154,155,5,10,0,0,155,
163,5,25,0,0,156,158,5,11,0,0,157,156,1,0,0,0,157,158,1,0,0,0,158,159,1,
0,0,0,159,163,5,25,0,0,160,163,5,27,0,0,161,163,3,10,5,0,162,140,1,0,0,0,
162,141,1,0,0,0,162,143,1,0,0,0,162,152,1,0,0,0,162,153,1,0,0,0,162,154,
1,0,0,0,162,157,1,0,0,0,162,160,1,0,0,0,162,161,1,0,0,0,163,27,1,0,0,0,164,
169,3,26,13,0,165,166,5,20,0,0,166,168,3,26,13,0,167,165,1,0,0,0,168,171,
1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,29,1,0,0,0,171,169,1,0,0,0,172,
173,7,3,0,0,173,31,1,0,0,0,174,175,3,4,2,0,175,176,3,30,15,0,176,177,5,15,
0,0,177,179,5,34,0,0,178,180,3,28,14,0,179,178,1,0,0,0,179,180,1,0,0,0,180,
181,1,0,0,0,181,182,5,35,0,0,182,33,1,0,0,0,183,185,3,0,0,0,184,186,5,17,
0,0,185,184,1,0,0,0,185,186,1,0,0,0,186,188,1,0,0,0,187,189,5,16,0,0,188,
187,1,0,0,0,188,189,1,0,0,0,189,190,1,0,0,0,190,191,3,32,16,0,191,35,1,0,
0,0,192,193,3,32,16,0,193,37,1,0,0,0,194,195,3,32,16,0,195,39,1,0,0,0,196,
200,3,34,17,0,197,200,3,36,18,0,198,200,3,38,19,0,199,196,1,0,0,0,199,197,
1,0,0,0,199,198,1,0,0,0,200,201,1,0,0,0,201,202,5,19,0,0,202,41,1,0,0,0,
203,205,3,40,20,0,204,203,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,206,207,
1,0,0,0,207,209,1,0,0,0,208,206,1,0,0,0,209,210,5,0,0,1,210,43,1,0,0,0,23,
59,77,84,87,94,97,101,109,117,124,129,136,143,146,149,157,162,169,179,185,
188,199,206];


const atn = new antlr4.atn.ATNDeserializer().deserialize(serializedATN);

const decisionsToDFA = atn.decisionToState.map( (ds, index) => new antlr4.dfa.DFA(ds, index) );

const sharedContextCache = new antlr4.atn.PredictionContextCache();

export default class CPPONGrammarParser extends antlr4.Parser {

    static grammarFileName = "CPPONGrammar.g4";
    static literalNames = [ null, "'std::string'", "'SFString'", "'CString'", 
                            "'bool'", "'int'", "'int32_t'", "'float'", "'double'", 
                            "'new '", "'-'", "'+'", null, null, null, null, 
                            "'&'", "'*'", "'='", "';'", "','", "'.'", "'.set'", 
                            "'.X3DNode::set'", "'.add'", null, "'-1'", null, 
                            null, null, "'{'", "'}'", "'['", "']'", "'('", 
                            "')'" ];
    static symbolicNames = [ null, null, null, null, null, null, null, null, 
                             null, null, null, null, "WS_AND_NL", "COMMENT", 
                             "CPPDIR", "IDENTIFIER", "REFERENCE", "POINTER", 
                             "EQUALS", "SEMI", "COMMA", "DOT", "SET", "X3DNODESET", 
                             "ADD", "WHOLE", "SENTINEL", "FLOAT", "TRUE", 
                             "FALSE", "OPENBRACE", "CLOSEBRACE", "OPENBRACKET", 
                             "CLOSEBRACKET", "OPENPAREN", "CLOSEPAREN", 
                             "STRING" ];
    static ruleNames = [ "type", "arraytype", "variable", "string", "cstring", 
                         "boolean_val", "boolean_list", "integer_list", 
                         "float_list", "string_list", "list", "construct_array", 
                         "cast", "parameter", "parameters", "operator", 
                         "funccall", "construct", "set_field", "add_field", 
                         "line", "x3d" ];

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
	        this.state = 44;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) === 0 && ((1 << _la) & 33278) !== 0))) {
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
	        this.state = 59;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,0,this._ctx);
	        switch(la_) {
	        case 1:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 46;
	            this.match(CPPONGrammarParser.T__8);
	            this.state = 47;
	            this.type();
	            this.state = 48;
	            this.match(CPPONGrammarParser.OPENBRACKET);
	            this.state = 49;
	            this.match(CPPONGrammarParser.CLOSEBRACKET);
	            break;

	        case 2:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 51;
	            this.match(CPPONGrammarParser.OPENPAREN);
	            this.state = 52;
	            this.type();
	            this.state = 53;
	            this.match(CPPONGrammarParser.OPENBRACKET);
	            this.state = 54;
	            this.match(CPPONGrammarParser.CLOSEBRACKET);
	            this.state = 55;
	            this.match(CPPONGrammarParser.CLOSEPAREN);
	            break;

	        case 3:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 57;
	            this.match(CPPONGrammarParser.T__8);
	            this.state = 58;
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
	        this.state = 61;
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
	        this.state = 63;
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
	        this.state = 65;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) === 0 && ((1 << _la) & 14) !== 0))) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	        this.state = 66;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 67;
	        this.string();
	        this.state = 68;
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
	        this.state = 70;
	        _la = this._input.LA(1);
	        if(!(_la===28 || _la===29)) {
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
	        this.state = 72;
	        this.boolean_val();
	        this.state = 77;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===20) {
	            this.state = 73;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 74;
	            this.boolean_val();
	            this.state = 79;
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
	        this.state = 87;
	        this._errHandler.sync(this);
	        switch(this._input.LA(1)) {
	        case 26:
	            this.state = 80;
	            this.match(CPPONGrammarParser.SENTINEL);
	            break;
	        case 10:
	            this.state = 81;
	            this.match(CPPONGrammarParser.T__9);
	            this.state = 82;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;
	        case 11:
	        case 25:
	            this.state = 84;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===11) {
	                this.state = 83;
	                this.match(CPPONGrammarParser.T__10);
	            }

	            this.state = 86;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;
	        default:
	            throw new antlr4.error.NoViableAltException(this);
	        }
	        this.state = 101;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===20) {
	            this.state = 89;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 97;
	            this._errHandler.sync(this);
	            switch(this._input.LA(1)) {
	            case 26:
	                this.state = 90;
	                this.match(CPPONGrammarParser.SENTINEL);
	                break;
	            case 10:
	                this.state = 91;
	                this.match(CPPONGrammarParser.T__9);
	                this.state = 92;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            case 11:
	            case 25:
	                this.state = 94;
	                this._errHandler.sync(this);
	                _la = this._input.LA(1);
	                if(_la===11) {
	                    this.state = 93;
	                    this.match(CPPONGrammarParser.T__10);
	                }

	                this.state = 96;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            default:
	                throw new antlr4.error.NoViableAltException(this);
	            }
	            this.state = 103;
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
	        this.state = 104;
	        this.match(CPPONGrammarParser.FLOAT);
	        this.state = 109;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===20) {
	            this.state = 105;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 106;
	            this.match(CPPONGrammarParser.FLOAT);
	            this.state = 111;
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
	        this.state = 112;
	        this.string();
	        this.state = 117;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===20) {
	            this.state = 113;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 114;
	            this.string();
	            this.state = 119;
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
	        this.state = 124;
	        this._errHandler.sync(this);
	        switch(this._input.LA(1)) {
	        case 28:
	        case 29:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 120;
	            this.boolean_list();
	            break;
	        case 10:
	        case 11:
	        case 25:
	        case 26:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 121;
	            this.integer_list();
	            break;
	        case 27:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 122;
	            this.float_list();
	            break;
	        case 36:
	            this.enterOuterAlt(localctx, 4);
	            this.state = 123;
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
	        this.state = 126;
	        this.arraytype();
	        this.state = 127;
	        this.match(CPPONGrammarParser.OPENBRACE);
	        this.state = 129;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(((((_la - 10)) & ~0x1f) === 0 && ((1 << (_la - 10)) & 68124675) !== 0)) {
	            this.state = 128;
	            this.list();
	        }

	        this.state = 131;
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
	        this.state = 133;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 134;
	        this.type();
	        this.state = 136;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===17) {
	            this.state = 135;
	            this.match(CPPONGrammarParser.POINTER);
	        }

	        this.state = 138;
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
	    this.enterRule(localctx, 26, CPPONGrammarParser.RULE_parameter);
	    var _la = 0;
	    try {
	        this.state = 162;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,16,this._ctx);
	        switch(la_) {
	        case 1:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 140;
	            this.cstring();
	            break;

	        case 2:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 141;
	            this.string();
	            break;

	        case 3:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 143;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===34) {
	                this.state = 142;
	                this.cast();
	            }

	            this.state = 146;
	            this._errHandler.sync(this);
	            var la_ = this._interp.adaptivePredict(this._input,13,this._ctx);
	            if(la_===1) {
	                this.state = 145;
	                this.type();

	            }
	            this.state = 149;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===16) {
	                this.state = 148;
	                this.match(CPPONGrammarParser.REFERENCE);
	            }

	            this.state = 151;
	            this.variable();
	            break;

	        case 4:
	            this.enterOuterAlt(localctx, 4);
	            this.state = 152;
	            this.construct_array();
	            break;

	        case 5:
	            this.enterOuterAlt(localctx, 5);
	            this.state = 153;
	            this.match(CPPONGrammarParser.SENTINEL);
	            break;

	        case 6:
	            this.enterOuterAlt(localctx, 6);
	            this.state = 154;
	            this.match(CPPONGrammarParser.T__9);
	            this.state = 155;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;

	        case 7:
	            this.enterOuterAlt(localctx, 7);
	            this.state = 157;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===11) {
	                this.state = 156;
	                this.match(CPPONGrammarParser.T__10);
	            }

	            this.state = 159;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;

	        case 8:
	            this.enterOuterAlt(localctx, 8);
	            this.state = 160;
	            this.match(CPPONGrammarParser.FLOAT);
	            break;

	        case 9:
	            this.enterOuterAlt(localctx, 9);
	            this.state = 161;
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
	    this.enterRule(localctx, 28, CPPONGrammarParser.RULE_parameters);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 164;
	        this.parameter();
	        this.state = 169;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===20) {
	            this.state = 165;
	            this.match(CPPONGrammarParser.COMMA);
	            this.state = 166;
	            this.parameter();
	            this.state = 171;
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
	    this.enterRule(localctx, 30, CPPONGrammarParser.RULE_operator);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 172;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) === 0 && ((1 << _la) & 31719424) !== 0))) {
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
	    this.enterRule(localctx, 32, CPPONGrammarParser.RULE_funccall);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 174;
	        this.variable();
	        this.state = 175;
	        this.operator();
	        this.state = 176;
	        this.match(CPPONGrammarParser.IDENTIFIER);
	        this.state = 177;
	        this.match(CPPONGrammarParser.OPENPAREN);
	        this.state = 179;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if((((_la) & ~0x1f) === 0 && ((1 << _la) & 1040289790) !== 0) || _la===34 || _la===36) {
	            this.state = 178;
	            this.parameters();
	        }

	        this.state = 181;
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
	    this.enterRule(localctx, 34, CPPONGrammarParser.RULE_construct);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 183;
	        this.type();
	        this.state = 185;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===17) {
	            this.state = 184;
	            this.match(CPPONGrammarParser.POINTER);
	        }

	        this.state = 188;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===16) {
	            this.state = 187;
	            this.match(CPPONGrammarParser.REFERENCE);
	        }

	        this.state = 190;
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
	    this.enterRule(localctx, 36, CPPONGrammarParser.RULE_set_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 192;
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
	    this.enterRule(localctx, 38, CPPONGrammarParser.RULE_add_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 194;
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
	    this.enterRule(localctx, 40, CPPONGrammarParser.RULE_line);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 199;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,21,this._ctx);
	        switch(la_) {
	        case 1:
	            this.state = 196;
	            this.construct();
	            break;

	        case 2:
	            this.state = 197;
	            this.set_field();
	            break;

	        case 3:
	            this.state = 198;
	            this.add_field();
	            break;

	        }
	        this.state = 201;
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
	    this.enterRule(localctx, 42, CPPONGrammarParser.RULE_x3d);
	    var _la = 0;
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 206;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while((((_la) & ~0x1f) === 0 && ((1 << _la) & 33278) !== 0)) {
	            this.state = 203;
	            this.line();
	            this.state = 208;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	        this.state = 209;
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
CPPONGrammarParser.T__10 = 11;
CPPONGrammarParser.WS_AND_NL = 12;
CPPONGrammarParser.COMMENT = 13;
CPPONGrammarParser.CPPDIR = 14;
CPPONGrammarParser.IDENTIFIER = 15;
CPPONGrammarParser.REFERENCE = 16;
CPPONGrammarParser.POINTER = 17;
CPPONGrammarParser.EQUALS = 18;
CPPONGrammarParser.SEMI = 19;
CPPONGrammarParser.COMMA = 20;
CPPONGrammarParser.DOT = 21;
CPPONGrammarParser.SET = 22;
CPPONGrammarParser.X3DNODESET = 23;
CPPONGrammarParser.ADD = 24;
CPPONGrammarParser.WHOLE = 25;
CPPONGrammarParser.SENTINEL = 26;
CPPONGrammarParser.FLOAT = 27;
CPPONGrammarParser.TRUE = 28;
CPPONGrammarParser.FALSE = 29;
CPPONGrammarParser.OPENBRACE = 30;
CPPONGrammarParser.CLOSEBRACE = 31;
CPPONGrammarParser.OPENBRACKET = 32;
CPPONGrammarParser.CLOSEBRACKET = 33;
CPPONGrammarParser.OPENPAREN = 34;
CPPONGrammarParser.CLOSEPAREN = 35;
CPPONGrammarParser.STRING = 36;

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
CPPONGrammarParser.RULE_parameter = 13;
CPPONGrammarParser.RULE_parameters = 14;
CPPONGrammarParser.RULE_operator = 15;
CPPONGrammarParser.RULE_funccall = 16;
CPPONGrammarParser.RULE_construct = 17;
CPPONGrammarParser.RULE_set_field = 18;
CPPONGrammarParser.RULE_add_field = 19;
CPPONGrammarParser.RULE_line = 20;
CPPONGrammarParser.RULE_x3d = 21;

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

	cstring() {
	    return this.getTypedRuleContext(CstringContext,0);
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
CPPONGrammarParser.ParameterContext = ParameterContext; 
CPPONGrammarParser.ParametersContext = ParametersContext; 
CPPONGrammarParser.OperatorContext = OperatorContext; 
CPPONGrammarParser.FunccallContext = FunccallContext; 
CPPONGrammarParser.ConstructContext = ConstructContext; 
CPPONGrammarParser.Set_fieldContext = Set_fieldContext; 
CPPONGrammarParser.Add_fieldContext = Add_fieldContext; 
CPPONGrammarParser.LineContext = LineContext; 
CPPONGrammarParser.X3dContext = X3dContext; 
