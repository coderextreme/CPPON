// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class CPPONGrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, WS_AND_NL=11, COMMENT=12, CPPDIR=13, NEW=14, TRUE=15, FALSE=16, 
		STATIC_CAST=17, DYNAMIC_CAST=18, SET=19, X3DNODESET=20, ADD=21, IDENTIFIER=22, 
		REFERENCE=23, POINTER=24, EQUALS=25, SEMI=26, COMMA=27, DOT=28, LT=29, 
		GT=30, WHOLE=31, SENTINEL=32, FLOAT=33, OPENBRACE=34, CLOSEBRACE=35, OPENBRACKET=36, 
		CLOSEBRACKET=37, OPENPAREN=38, CLOSEPAREN=39, STRING=40;
	public static final int
		RULE_type = 0, RULE_arraytype = 1, RULE_variable = 2, RULE_string = 3, 
		RULE_cstring = 4, RULE_boolean_val = 5, RULE_boolean_list = 6, RULE_integer_list = 7, 
		RULE_float_list = 8, RULE_string_list = 9, RULE_list = 10, RULE_construct_array = 11, 
		RULE_cast = 12, RULE_cpp_cast = 13, RULE_parameter = 14, RULE_parameters = 15, 
		RULE_operator = 16, RULE_funccall = 17, RULE_construct = 18, RULE_set_field = 19, 
		RULE_add_field = 20, RULE_line = 21, RULE_x3d = 22;
	private static String[] makeRuleNames() {
		return new String[] {
			"type", "arraytype", "variable", "string", "cstring", "boolean_val", 
			"boolean_list", "integer_list", "float_list", "string_list", "list", 
			"construct_array", "cast", "cpp_cast", "parameter", "parameters", "operator", 
			"funccall", "construct", "set_field", "add_field", "line", "x3d"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'std::string'", "'SFString'", "'CString'", "'bool'", "'int'", 
			"'int32_t'", "'float'", "'double'", "'-'", "'+'", null, null, null, "'new'", 
			null, null, "'static_cast'", "'dynamic_cast'", "'.set'", "'.X3DNode::set'", 
			"'.add'", null, "'&'", "'*'", "'='", "';'", "','", "'.'", "'<'", "'>'", 
			null, "'-1'", null, "'{'", "'}'", "'['", "']'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "WS_AND_NL", 
			"COMMENT", "CPPDIR", "NEW", "TRUE", "FALSE", "STATIC_CAST", "DYNAMIC_CAST", 
			"SET", "X3DNODESET", "ADD", "IDENTIFIER", "REFERENCE", "POINTER", "EQUALS", 
			"SEMI", "COMMA", "DOT", "LT", "GT", "WHOLE", "SENTINEL", "FLOAT", "OPENBRACE", 
			"CLOSEBRACE", "OPENBRACKET", "CLOSEBRACKET", "OPENPAREN", "CLOSEPAREN", 
			"STRING"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "CPPONGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CPPONGrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitType(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 4194814L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArraytypeContext extends ParserRuleContext {
		public TerminalNode NEW() { return getToken(CPPONGrammarParser.NEW, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode OPENBRACKET() { return getToken(CPPONGrammarParser.OPENBRACKET, 0); }
		public TerminalNode CLOSEBRACKET() { return getToken(CPPONGrammarParser.CLOSEBRACKET, 0); }
		public TerminalNode OPENPAREN() { return getToken(CPPONGrammarParser.OPENPAREN, 0); }
		public TerminalNode CLOSEPAREN() { return getToken(CPPONGrammarParser.CLOSEPAREN, 0); }
		public ArraytypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arraytype; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterArraytype(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitArraytype(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitArraytype(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ArraytypeContext arraytype() throws RecognitionException {
		ArraytypeContext _localctx = new ArraytypeContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_arraytype);
		try {
			setState(61);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(48);
				match(NEW);
				setState(49);
				type();
				setState(50);
				match(OPENBRACKET);
				setState(51);
				match(CLOSEBRACKET);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(53);
				match(OPENPAREN);
				setState(54);
				type();
				setState(55);
				match(OPENBRACKET);
				setState(56);
				match(CLOSEBRACKET);
				setState(57);
				match(CLOSEPAREN);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(59);
				match(NEW);
				setState(60);
				type();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterVariable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitVariable(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitVariable(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StringContext extends ParserRuleContext {
		public TerminalNode STRING() { return getToken(CPPONGrammarParser.STRING, 0); }
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitString(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitString(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CstringContext extends ParserRuleContext {
		public TerminalNode OPENPAREN() { return getToken(CPPONGrammarParser.OPENPAREN, 0); }
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public TerminalNode CLOSEPAREN() { return getToken(CPPONGrammarParser.CLOSEPAREN, 0); }
		public CstringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cstring; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterCstring(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitCstring(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitCstring(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CstringContext cstring() throws RecognitionException {
		CstringContext _localctx = new CstringContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_cstring);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 14L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(68);
			match(OPENPAREN);
			setState(69);
			string();
			setState(70);
			match(CLOSEPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Boolean_valContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(CPPONGrammarParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(CPPONGrammarParser.FALSE, 0); }
		public Boolean_valContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_val; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterBoolean_val(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitBoolean_val(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitBoolean_val(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_valContext boolean_val() throws RecognitionException {
		Boolean_valContext _localctx = new Boolean_valContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_boolean_val);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(72);
			_la = _input.LA(1);
			if ( !(_la==TRUE || _la==FALSE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Boolean_listContext extends ParserRuleContext {
		public List<Boolean_valContext> boolean_val() {
			return getRuleContexts(Boolean_valContext.class);
		}
		public Boolean_valContext boolean_val(int i) {
			return getRuleContext(Boolean_valContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
		public Boolean_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterBoolean_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitBoolean_list(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitBoolean_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_listContext boolean_list() throws RecognitionException {
		Boolean_listContext _localctx = new Boolean_listContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_boolean_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			boolean_val();
			setState(79);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(75);
				match(COMMA);
				setState(76);
				boolean_val();
				}
				}
				setState(81);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Integer_listContext extends ParserRuleContext {
		public List<TerminalNode> SENTINEL() { return getTokens(CPPONGrammarParser.SENTINEL); }
		public TerminalNode SENTINEL(int i) {
			return getToken(CPPONGrammarParser.SENTINEL, i);
		}
		public List<TerminalNode> WHOLE() { return getTokens(CPPONGrammarParser.WHOLE); }
		public TerminalNode WHOLE(int i) {
			return getToken(CPPONGrammarParser.WHOLE, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
		public Integer_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integer_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterInteger_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitInteger_list(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitInteger_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Integer_listContext integer_list() throws RecognitionException {
		Integer_listContext _localctx = new Integer_listContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_integer_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SENTINEL:
				{
				setState(82);
				match(SENTINEL);
				}
				break;
			case T__8:
				{
				setState(83);
				match(T__8);
				setState(84);
				match(WHOLE);
				}
				break;
			case T__9:
			case WHOLE:
				{
				setState(86);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__9) {
					{
					setState(85);
					match(T__9);
					}
				}

				setState(88);
				match(WHOLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(103);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(91);
				match(COMMA);
				setState(99);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SENTINEL:
					{
					setState(92);
					match(SENTINEL);
					}
					break;
				case T__8:
					{
					setState(93);
					match(T__8);
					setState(94);
					match(WHOLE);
					}
					break;
				case T__9:
				case WHOLE:
					{
					setState(96);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__9) {
						{
						setState(95);
						match(T__9);
						}
					}

					setState(98);
					match(WHOLE);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(105);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Float_listContext extends ParserRuleContext {
		public List<TerminalNode> FLOAT() { return getTokens(CPPONGrammarParser.FLOAT); }
		public TerminalNode FLOAT(int i) {
			return getToken(CPPONGrammarParser.FLOAT, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
		public Float_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_float_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterFloat_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitFloat_list(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitFloat_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Float_listContext float_list() throws RecognitionException {
		Float_listContext _localctx = new Float_listContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_float_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			match(FLOAT);
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(107);
				match(COMMA);
				setState(108);
				match(FLOAT);
				}
				}
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class String_listContext extends ParserRuleContext {
		public List<StringContext> string() {
			return getRuleContexts(StringContext.class);
		}
		public StringContext string(int i) {
			return getRuleContext(StringContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
		public String_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterString_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitString_list(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitString_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final String_listContext string_list() throws RecognitionException {
		String_listContext _localctx = new String_listContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_string_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(114);
			string();
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(115);
				match(COMMA);
				setState(116);
				string();
				}
				}
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ListContext extends ParserRuleContext {
		public Boolean_listContext boolean_list() {
			return getRuleContext(Boolean_listContext.class,0);
		}
		public Integer_listContext integer_list() {
			return getRuleContext(Integer_listContext.class,0);
		}
		public Float_listContext float_list() {
			return getRuleContext(Float_listContext.class,0);
		}
		public String_listContext string_list() {
			return getRuleContext(String_listContext.class,0);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_list);
		try {
			setState(126);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TRUE:
			case FALSE:
				enterOuterAlt(_localctx, 1);
				{
				setState(122);
				boolean_list();
				}
				break;
			case T__8:
			case T__9:
			case WHOLE:
			case SENTINEL:
				enterOuterAlt(_localctx, 2);
				{
				setState(123);
				integer_list();
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				float_list();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 4);
				{
				setState(125);
				string_list();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Construct_arrayContext extends ParserRuleContext {
		public ArraytypeContext arraytype() {
			return getRuleContext(ArraytypeContext.class,0);
		}
		public TerminalNode OPENBRACE() { return getToken(CPPONGrammarParser.OPENBRACE, 0); }
		public TerminalNode CLOSEBRACE() { return getToken(CPPONGrammarParser.CLOSEBRACE, 0); }
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public Construct_arrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_construct_array; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterConstruct_array(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitConstruct_array(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitConstruct_array(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Construct_arrayContext construct_array() throws RecognitionException {
		Construct_arrayContext _localctx = new Construct_arrayContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_construct_array);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			arraytype();
			setState(129);
			match(OPENBRACE);
			setState(131);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1114544113152L) != 0)) {
				{
				setState(130);
				list();
				}
			}

			setState(133);
			match(CLOSEBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CastContext extends ParserRuleContext {
		public TerminalNode OPENPAREN() { return getToken(CPPONGrammarParser.OPENPAREN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode CLOSEPAREN() { return getToken(CPPONGrammarParser.CLOSEPAREN, 0); }
		public TerminalNode POINTER() { return getToken(CPPONGrammarParser.POINTER, 0); }
		public CastContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cast; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterCast(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitCast(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitCast(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CastContext cast() throws RecognitionException {
		CastContext _localctx = new CastContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_cast);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			match(OPENPAREN);
			setState(136);
			type();
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==POINTER) {
				{
				setState(137);
				match(POINTER);
				}
			}

			setState(140);
			match(CLOSEPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Cpp_castContext extends ParserRuleContext {
		public TerminalNode LT() { return getToken(CPPONGrammarParser.LT, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode GT() { return getToken(CPPONGrammarParser.GT, 0); }
		public TerminalNode OPENPAREN() { return getToken(CPPONGrammarParser.OPENPAREN, 0); }
		public ParameterContext parameter() {
			return getRuleContext(ParameterContext.class,0);
		}
		public TerminalNode CLOSEPAREN() { return getToken(CPPONGrammarParser.CLOSEPAREN, 0); }
		public TerminalNode STATIC_CAST() { return getToken(CPPONGrammarParser.STATIC_CAST, 0); }
		public TerminalNode DYNAMIC_CAST() { return getToken(CPPONGrammarParser.DYNAMIC_CAST, 0); }
		public TerminalNode POINTER() { return getToken(CPPONGrammarParser.POINTER, 0); }
		public Cpp_castContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cpp_cast; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterCpp_cast(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitCpp_cast(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitCpp_cast(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Cpp_castContext cpp_cast() throws RecognitionException {
		Cpp_castContext _localctx = new Cpp_castContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_cpp_cast);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(142);
			_la = _input.LA(1);
			if ( !(_la==STATIC_CAST || _la==DYNAMIC_CAST) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(143);
			match(LT);
			setState(144);
			type();
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==POINTER) {
				{
				setState(145);
				match(POINTER);
				}
			}

			setState(148);
			match(GT);
			setState(149);
			match(OPENPAREN);
			setState(150);
			parameter();
			setState(151);
			match(CLOSEPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterContext extends ParserRuleContext {
		public Cpp_castContext cpp_cast() {
			return getRuleContext(Cpp_castContext.class,0);
		}
		public CstringContext cstring() {
			return getRuleContext(CstringContext.class,0);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public CastContext cast() {
			return getRuleContext(CastContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode REFERENCE() { return getToken(CPPONGrammarParser.REFERENCE, 0); }
		public Construct_arrayContext construct_array() {
			return getRuleContext(Construct_arrayContext.class,0);
		}
		public TerminalNode SENTINEL() { return getToken(CPPONGrammarParser.SENTINEL, 0); }
		public TerminalNode WHOLE() { return getToken(CPPONGrammarParser.WHOLE, 0); }
		public TerminalNode FLOAT() { return getToken(CPPONGrammarParser.FLOAT, 0); }
		public Boolean_valContext boolean_val() {
			return getRuleContext(Boolean_valContext.class,0);
		}
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterParameter(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitParameter(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitParameter(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_parameter);
		int _la;
		try {
			setState(176);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(153);
				cpp_cast();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(154);
				cstring();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(155);
				string();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OPENPAREN) {
					{
					setState(156);
					cast();
					}
				}

				setState(160);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(159);
					type();
					}
					break;
				}
				setState(163);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REFERENCE) {
					{
					setState(162);
					match(REFERENCE);
					}
				}

				setState(165);
				variable();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(166);
				construct_array();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(167);
				match(SENTINEL);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(168);
				match(T__8);
				setState(169);
				match(WHOLE);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(171);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__9) {
					{
					setState(170);
					match(T__9);
					}
				}

				setState(173);
				match(WHOLE);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(174);
				match(FLOAT);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(175);
				boolean_val();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParametersContext extends ParserRuleContext {
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
		public ParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameters; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterParameters(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitParameters(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitParameters(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ParametersContext parameters() throws RecognitionException {
		ParametersContext _localctx = new ParametersContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_parameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			parameter();
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(179);
				match(COMMA);
				setState(180);
				parameter();
				}
				}
				setState(185);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperatorContext extends ParserRuleContext {
		public TerminalNode EQUALS() { return getToken(CPPONGrammarParser.EQUALS, 0); }
		public TerminalNode X3DNODESET() { return getToken(CPPONGrammarParser.X3DNODESET, 0); }
		public TerminalNode SET() { return getToken(CPPONGrammarParser.SET, 0); }
		public TerminalNode ADD() { return getToken(CPPONGrammarParser.ADD, 0); }
		public TerminalNode DOT() { return getToken(CPPONGrammarParser.DOT, 0); }
		public OperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterOperator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitOperator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitOperator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final OperatorContext operator() throws RecognitionException {
		OperatorContext _localctx = new OperatorContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(186);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 305659904L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunccallContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public TerminalNode OPENPAREN() { return getToken(CPPONGrammarParser.OPENPAREN, 0); }
		public TerminalNode CLOSEPAREN() { return getToken(CPPONGrammarParser.CLOSEPAREN, 0); }
		public ParametersContext parameters() {
			return getRuleContext(ParametersContext.class,0);
		}
		public FunccallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funccall; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterFunccall(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitFunccall(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitFunccall(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FunccallContext funccall() throws RecognitionException {
		FunccallContext _localctx = new FunccallContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_funccall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			variable();
			setState(189);
			operator();
			setState(190);
			match(IDENTIFIER);
			setState(191);
			match(OPENPAREN);
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1389435013118L) != 0)) {
				{
				setState(192);
				parameters();
				}
			}

			setState(195);
			match(CLOSEPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstructContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public TerminalNode POINTER() { return getToken(CPPONGrammarParser.POINTER, 0); }
		public TerminalNode REFERENCE() { return getToken(CPPONGrammarParser.REFERENCE, 0); }
		public ConstructContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_construct; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterConstruct(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitConstruct(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitConstruct(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstructContext construct() throws RecognitionException {
		ConstructContext _localctx = new ConstructContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_construct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			type();
			setState(199);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==POINTER) {
				{
				setState(198);
				match(POINTER);
				}
			}

			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==REFERENCE) {
				{
				setState(201);
				match(REFERENCE);
				}
			}

			setState(204);
			funccall();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Set_fieldContext extends ParserRuleContext {
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public Set_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_set_field; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterSet_field(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitSet_field(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitSet_field(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Set_fieldContext set_field() throws RecognitionException {
		Set_fieldContext _localctx = new Set_fieldContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_set_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
			funccall();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Add_fieldContext extends ParserRuleContext {
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public Add_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_add_field; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterAdd_field(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitAdd_field(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitAdd_field(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Add_fieldContext add_field() throws RecognitionException {
		Add_fieldContext _localctx = new Add_fieldContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_add_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			funccall();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LineContext extends ParserRuleContext {
		public TerminalNode SEMI() { return getToken(CPPONGrammarParser.SEMI, 0); }
		public ConstructContext construct() {
			return getRuleContext(ConstructContext.class,0);
		}
		public Set_fieldContext set_field() {
			return getRuleContext(Set_fieldContext.class,0);
		}
		public Add_fieldContext add_field() {
			return getRuleContext(Add_fieldContext.class,0);
		}
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterLine(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitLine(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitLine(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_line);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(210);
				construct();
				}
				break;
			case 2:
				{
				setState(211);
				set_field();
				}
				break;
			case 3:
				{
				setState(212);
				add_field();
				}
				break;
			}
			setState(215);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class X3dContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(CPPONGrammarParser.EOF, 0); }
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public X3dContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_x3d; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterX3d(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitX3d(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof CPPONGrammarVisitor ) return ((CPPONGrammarVisitor<? extends T>)visitor).visitX3d(this);
			else return visitor.visitChildren(this);
		}
	}

	public final X3dContext x3d() throws RecognitionException {
		X3dContext _localctx = new X3dContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_x3d);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 4194814L) != 0)) {
				{
				{
				setState(217);
				line();
				}
				}
				setState(222);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(223);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001(\u00e2\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001"+
		">\b\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0005\u0006N\b\u0006\n\u0006\f\u0006"+
		"Q\t\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007"+
		"W\b\u0007\u0001\u0007\u0003\u0007Z\b\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0003\u0007a\b\u0007\u0001\u0007\u0003"+
		"\u0007d\b\u0007\u0005\u0007f\b\u0007\n\u0007\f\u0007i\t\u0007\u0001\b"+
		"\u0001\b\u0001\b\u0005\bn\b\b\n\b\f\bq\t\b\u0001\t\u0001\t\u0001\t\u0005"+
		"\tv\b\t\n\t\f\ty\t\t\u0001\n\u0001\n\u0001\n\u0001\n\u0003\n\u007f\b\n"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u0084\b\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\f\u0001\f\u0001\f\u0003\f\u008b\b\f\u0001\f\u0001\f"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u0093\b\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003"+
		"\u000e\u009e\b\u000e\u0001\u000e\u0003\u000e\u00a1\b\u000e\u0001\u000e"+
		"\u0003\u000e\u00a4\b\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0003\u000e\u00ac\b\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0003\u000e\u00b1\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0005\u000f\u00b6\b\u000f\n\u000f\f\u000f\u00b9\t\u000f\u0001\u0010\u0001"+
		"\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0003"+
		"\u0011\u00c2\b\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0003"+
		"\u0012\u00c8\b\u0012\u0001\u0012\u0003\u0012\u00cb\b\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0003\u0015\u00d6\b\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0016\u0005\u0016\u00db\b\u0016\n\u0016\f\u0016\u00de\t\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0000\u0000\u0017\u0000\u0002\u0004\u0006"+
		"\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,\u0000"+
		"\u0005\u0002\u0000\u0001\b\u0016\u0016\u0001\u0000\u0001\u0003\u0001\u0000"+
		"\u000f\u0010\u0001\u0000\u0011\u0012\u0003\u0000\u0013\u0015\u0019\u0019"+
		"\u001c\u001c\u00f0\u0000.\u0001\u0000\u0000\u0000\u0002=\u0001\u0000\u0000"+
		"\u0000\u0004?\u0001\u0000\u0000\u0000\u0006A\u0001\u0000\u0000\u0000\b"+
		"C\u0001\u0000\u0000\u0000\nH\u0001\u0000\u0000\u0000\fJ\u0001\u0000\u0000"+
		"\u0000\u000eY\u0001\u0000\u0000\u0000\u0010j\u0001\u0000\u0000\u0000\u0012"+
		"r\u0001\u0000\u0000\u0000\u0014~\u0001\u0000\u0000\u0000\u0016\u0080\u0001"+
		"\u0000\u0000\u0000\u0018\u0087\u0001\u0000\u0000\u0000\u001a\u008e\u0001"+
		"\u0000\u0000\u0000\u001c\u00b0\u0001\u0000\u0000\u0000\u001e\u00b2\u0001"+
		"\u0000\u0000\u0000 \u00ba\u0001\u0000\u0000\u0000\"\u00bc\u0001\u0000"+
		"\u0000\u0000$\u00c5\u0001\u0000\u0000\u0000&\u00ce\u0001\u0000\u0000\u0000"+
		"(\u00d0\u0001\u0000\u0000\u0000*\u00d5\u0001\u0000\u0000\u0000,\u00dc"+
		"\u0001\u0000\u0000\u0000./\u0007\u0000\u0000\u0000/\u0001\u0001\u0000"+
		"\u0000\u000001\u0005\u000e\u0000\u000012\u0003\u0000\u0000\u000023\u0005"+
		"$\u0000\u000034\u0005%\u0000\u00004>\u0001\u0000\u0000\u000056\u0005&"+
		"\u0000\u000067\u0003\u0000\u0000\u000078\u0005$\u0000\u000089\u0005%\u0000"+
		"\u00009:\u0005\'\u0000\u0000:>\u0001\u0000\u0000\u0000;<\u0005\u000e\u0000"+
		"\u0000<>\u0003\u0000\u0000\u0000=0\u0001\u0000\u0000\u0000=5\u0001\u0000"+
		"\u0000\u0000=;\u0001\u0000\u0000\u0000>\u0003\u0001\u0000\u0000\u0000"+
		"?@\u0005\u0016\u0000\u0000@\u0005\u0001\u0000\u0000\u0000AB\u0005(\u0000"+
		"\u0000B\u0007\u0001\u0000\u0000\u0000CD\u0007\u0001\u0000\u0000DE\u0005"+
		"&\u0000\u0000EF\u0003\u0006\u0003\u0000FG\u0005\'\u0000\u0000G\t\u0001"+
		"\u0000\u0000\u0000HI\u0007\u0002\u0000\u0000I\u000b\u0001\u0000\u0000"+
		"\u0000JO\u0003\n\u0005\u0000KL\u0005\u001b\u0000\u0000LN\u0003\n\u0005"+
		"\u0000MK\u0001\u0000\u0000\u0000NQ\u0001\u0000\u0000\u0000OM\u0001\u0000"+
		"\u0000\u0000OP\u0001\u0000\u0000\u0000P\r\u0001\u0000\u0000\u0000QO\u0001"+
		"\u0000\u0000\u0000RZ\u0005 \u0000\u0000ST\u0005\t\u0000\u0000TZ\u0005"+
		"\u001f\u0000\u0000UW\u0005\n\u0000\u0000VU\u0001\u0000\u0000\u0000VW\u0001"+
		"\u0000\u0000\u0000WX\u0001\u0000\u0000\u0000XZ\u0005\u001f\u0000\u0000"+
		"YR\u0001\u0000\u0000\u0000YS\u0001\u0000\u0000\u0000YV\u0001\u0000\u0000"+
		"\u0000Zg\u0001\u0000\u0000\u0000[c\u0005\u001b\u0000\u0000\\d\u0005 \u0000"+
		"\u0000]^\u0005\t\u0000\u0000^d\u0005\u001f\u0000\u0000_a\u0005\n\u0000"+
		"\u0000`_\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000\u0000ab\u0001\u0000"+
		"\u0000\u0000bd\u0005\u001f\u0000\u0000c\\\u0001\u0000\u0000\u0000c]\u0001"+
		"\u0000\u0000\u0000c`\u0001\u0000\u0000\u0000df\u0001\u0000\u0000\u0000"+
		"e[\u0001\u0000\u0000\u0000fi\u0001\u0000\u0000\u0000ge\u0001\u0000\u0000"+
		"\u0000gh\u0001\u0000\u0000\u0000h\u000f\u0001\u0000\u0000\u0000ig\u0001"+
		"\u0000\u0000\u0000jo\u0005!\u0000\u0000kl\u0005\u001b\u0000\u0000ln\u0005"+
		"!\u0000\u0000mk\u0001\u0000\u0000\u0000nq\u0001\u0000\u0000\u0000om\u0001"+
		"\u0000\u0000\u0000op\u0001\u0000\u0000\u0000p\u0011\u0001\u0000\u0000"+
		"\u0000qo\u0001\u0000\u0000\u0000rw\u0003\u0006\u0003\u0000st\u0005\u001b"+
		"\u0000\u0000tv\u0003\u0006\u0003\u0000us\u0001\u0000\u0000\u0000vy\u0001"+
		"\u0000\u0000\u0000wu\u0001\u0000\u0000\u0000wx\u0001\u0000\u0000\u0000"+
		"x\u0013\u0001\u0000\u0000\u0000yw\u0001\u0000\u0000\u0000z\u007f\u0003"+
		"\f\u0006\u0000{\u007f\u0003\u000e\u0007\u0000|\u007f\u0003\u0010\b\u0000"+
		"}\u007f\u0003\u0012\t\u0000~z\u0001\u0000\u0000\u0000~{\u0001\u0000\u0000"+
		"\u0000~|\u0001\u0000\u0000\u0000~}\u0001\u0000\u0000\u0000\u007f\u0015"+
		"\u0001\u0000\u0000\u0000\u0080\u0081\u0003\u0002\u0001\u0000\u0081\u0083"+
		"\u0005\"\u0000\u0000\u0082\u0084\u0003\u0014\n\u0000\u0083\u0082\u0001"+
		"\u0000\u0000\u0000\u0083\u0084\u0001\u0000\u0000\u0000\u0084\u0085\u0001"+
		"\u0000\u0000\u0000\u0085\u0086\u0005#\u0000\u0000\u0086\u0017\u0001\u0000"+
		"\u0000\u0000\u0087\u0088\u0005&\u0000\u0000\u0088\u008a\u0003\u0000\u0000"+
		"\u0000\u0089\u008b\u0005\u0018\u0000\u0000\u008a\u0089\u0001\u0000\u0000"+
		"\u0000\u008a\u008b\u0001\u0000\u0000\u0000\u008b\u008c\u0001\u0000\u0000"+
		"\u0000\u008c\u008d\u0005\'\u0000\u0000\u008d\u0019\u0001\u0000\u0000\u0000"+
		"\u008e\u008f\u0007\u0003\u0000\u0000\u008f\u0090\u0005\u001d\u0000\u0000"+
		"\u0090\u0092\u0003\u0000\u0000\u0000\u0091\u0093\u0005\u0018\u0000\u0000"+
		"\u0092\u0091\u0001\u0000\u0000\u0000\u0092\u0093\u0001\u0000\u0000\u0000"+
		"\u0093\u0094\u0001\u0000\u0000\u0000\u0094\u0095\u0005\u001e\u0000\u0000"+
		"\u0095\u0096\u0005&\u0000\u0000\u0096\u0097\u0003\u001c\u000e\u0000\u0097"+
		"\u0098\u0005\'\u0000\u0000\u0098\u001b\u0001\u0000\u0000\u0000\u0099\u00b1"+
		"\u0003\u001a\r\u0000\u009a\u00b1\u0003\b\u0004\u0000\u009b\u00b1\u0003"+
		"\u0006\u0003\u0000\u009c\u009e\u0003\u0018\f\u0000\u009d\u009c\u0001\u0000"+
		"\u0000\u0000\u009d\u009e\u0001\u0000\u0000\u0000\u009e\u00a0\u0001\u0000"+
		"\u0000\u0000\u009f\u00a1\u0003\u0000\u0000\u0000\u00a0\u009f\u0001\u0000"+
		"\u0000\u0000\u00a0\u00a1\u0001\u0000\u0000\u0000\u00a1\u00a3\u0001\u0000"+
		"\u0000\u0000\u00a2\u00a4\u0005\u0017\u0000\u0000\u00a3\u00a2\u0001\u0000"+
		"\u0000\u0000\u00a3\u00a4\u0001\u0000\u0000\u0000\u00a4\u00a5\u0001\u0000"+
		"\u0000\u0000\u00a5\u00b1\u0003\u0004\u0002\u0000\u00a6\u00b1\u0003\u0016"+
		"\u000b\u0000\u00a7\u00b1\u0005 \u0000\u0000\u00a8\u00a9\u0005\t\u0000"+
		"\u0000\u00a9\u00b1\u0005\u001f\u0000\u0000\u00aa\u00ac\u0005\n\u0000\u0000"+
		"\u00ab\u00aa\u0001\u0000\u0000\u0000\u00ab\u00ac\u0001\u0000\u0000\u0000"+
		"\u00ac\u00ad\u0001\u0000\u0000\u0000\u00ad\u00b1\u0005\u001f\u0000\u0000"+
		"\u00ae\u00b1\u0005!\u0000\u0000\u00af\u00b1\u0003\n\u0005\u0000\u00b0"+
		"\u0099\u0001\u0000\u0000\u0000\u00b0\u009a\u0001\u0000\u0000\u0000\u00b0"+
		"\u009b\u0001\u0000\u0000\u0000\u00b0\u009d\u0001\u0000\u0000\u0000\u00b0"+
		"\u00a6\u0001\u0000\u0000\u0000\u00b0\u00a7\u0001\u0000\u0000\u0000\u00b0"+
		"\u00a8\u0001\u0000\u0000\u0000\u00b0\u00ab\u0001\u0000\u0000\u0000\u00b0"+
		"\u00ae\u0001\u0000\u0000\u0000\u00b0\u00af\u0001\u0000\u0000\u0000\u00b1"+
		"\u001d\u0001\u0000\u0000\u0000\u00b2\u00b7\u0003\u001c\u000e\u0000\u00b3"+
		"\u00b4\u0005\u001b\u0000\u0000\u00b4\u00b6\u0003\u001c\u000e\u0000\u00b5"+
		"\u00b3\u0001\u0000\u0000\u0000\u00b6\u00b9\u0001\u0000\u0000\u0000\u00b7"+
		"\u00b5\u0001\u0000\u0000\u0000\u00b7\u00b8\u0001\u0000\u0000\u0000\u00b8"+
		"\u001f\u0001\u0000\u0000\u0000\u00b9\u00b7\u0001\u0000\u0000\u0000\u00ba"+
		"\u00bb\u0007\u0004\u0000\u0000\u00bb!\u0001\u0000\u0000\u0000\u00bc\u00bd"+
		"\u0003\u0004\u0002\u0000\u00bd\u00be\u0003 \u0010\u0000\u00be\u00bf\u0005"+
		"\u0016\u0000\u0000\u00bf\u00c1\u0005&\u0000\u0000\u00c0\u00c2\u0003\u001e"+
		"\u000f\u0000\u00c1\u00c0\u0001\u0000\u0000\u0000\u00c1\u00c2\u0001\u0000"+
		"\u0000\u0000\u00c2\u00c3\u0001\u0000\u0000\u0000\u00c3\u00c4\u0005\'\u0000"+
		"\u0000\u00c4#\u0001\u0000\u0000\u0000\u00c5\u00c7\u0003\u0000\u0000\u0000"+
		"\u00c6\u00c8\u0005\u0018\u0000\u0000\u00c7\u00c6\u0001\u0000\u0000\u0000"+
		"\u00c7\u00c8\u0001\u0000\u0000\u0000\u00c8\u00ca\u0001\u0000\u0000\u0000"+
		"\u00c9\u00cb\u0005\u0017\u0000\u0000\u00ca\u00c9\u0001\u0000\u0000\u0000"+
		"\u00ca\u00cb\u0001\u0000\u0000\u0000\u00cb\u00cc\u0001\u0000\u0000\u0000"+
		"\u00cc\u00cd\u0003\"\u0011\u0000\u00cd%\u0001\u0000\u0000\u0000\u00ce"+
		"\u00cf\u0003\"\u0011\u0000\u00cf\'\u0001\u0000\u0000\u0000\u00d0\u00d1"+
		"\u0003\"\u0011\u0000\u00d1)\u0001\u0000\u0000\u0000\u00d2\u00d6\u0003"+
		"$\u0012\u0000\u00d3\u00d6\u0003&\u0013\u0000\u00d4\u00d6\u0003(\u0014"+
		"\u0000\u00d5\u00d2\u0001\u0000\u0000\u0000\u00d5\u00d3\u0001\u0000\u0000"+
		"\u0000\u00d5\u00d4\u0001\u0000\u0000\u0000\u00d6\u00d7\u0001\u0000\u0000"+
		"\u0000\u00d7\u00d8\u0005\u001a\u0000\u0000\u00d8+\u0001\u0000\u0000\u0000"+
		"\u00d9\u00db\u0003*\u0015\u0000\u00da\u00d9\u0001\u0000\u0000\u0000\u00db"+
		"\u00de\u0001\u0000\u0000\u0000\u00dc\u00da\u0001\u0000\u0000\u0000\u00dc"+
		"\u00dd\u0001\u0000\u0000\u0000\u00dd\u00df\u0001\u0000\u0000\u0000\u00de"+
		"\u00dc\u0001\u0000\u0000\u0000\u00df\u00e0\u0005\u0000\u0000\u0001\u00e0"+
		"-\u0001\u0000\u0000\u0000\u0018=OVY`cgow~\u0083\u008a\u0092\u009d\u00a0"+
		"\u00a3\u00ab\u00b0\u00b7\u00c1\u00c7\u00ca\u00d5\u00dc";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}