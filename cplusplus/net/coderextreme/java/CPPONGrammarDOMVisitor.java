import org.w3c.dom.*;
import org.w3c.dom.ls.*;
import javax.xml.*;
import org.xml.sax.*;
import javax.xml.parsers.*;
import javax.xml.transform.dom.*;
import javax.xml.transform.stream.*;
import javax.xml.validation.*;

import org.antlr.v4.runtime.atn.PredictionMode;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.ANTLRFileStream;
import org.antlr.v4.runtime.RecognitionException;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;

import java.io.*;
import java.net.*;
import java.util.*;

public class CPPONGrammarDOMVisitor<Node extends org.w3c.dom.Node> extends CPPONGrammarBaseVisitor<Node> implements CPPONGrammarVisitor<Node> {
	private Map<String, Element> nodes = new HashMap<String, Element>();
	private Document document = null;

	public String log(Object s) {
		if (s != null) {
			System.out.print(s.toString());
			return (s.toString());
		} else {
			return "";
		}
	}

	public CPPONGrammarDOMVisitor(String filename) throws IOException {
		// first parse
	    CharStream input = new ANTLRFileStream(filename);
	    CPPONGrammarLexer lexer = new CPPONGrammarLexer(input);
	    CommonTokenStream tokens = new CommonTokenStream(lexer);
	    CPPONGrammarParser parser = new CPPONGrammarParser(tokens);
	    parser.getInterpreter().setPredictionMode(PredictionMode.SLL);
            CPPONGrammarParser.X3dContext ctx = null;
	    try {
		ctx = parser.x3d();  // STAGE 1
	    } catch (RecognitionException ex) {
		tokens.reset(); // rewind input stream
		parser.reset();
		parser.getInterpreter().setPredictionMode(PredictionMode.LL);
		ctx = parser.x3d();  // STAGE 2
		// if we parse ok, it's LL not SLL
	    }

	    document = (Document)this.visitX3d(ctx);
	    processDocument(document);
	}

	public Document getDocument() {
		return document;
	}

	public void processDocument(Document document) throws IOException {
	    if (document != null) {
		    DOMImplementationLS ls = (DOMImplementationLS)document.getImplementation();
		    LSOutput output = ls.createLSOutput();
		    LSSerializer ser = ls.createLSSerializer();
		    ser.getDomConfig().setParameter("format-pretty-print", true);
		    StringWriter writer = new StringWriter();
		    output.setCharacterStream(writer);
		    output.setEncoding("UTF-8");
		    try {
			    SchemaFactory sf = SchemaFactory.newInstance(XMLConstants.W3C_XML_SCHEMA_NS_URI);
			    StreamSource[] schemaSources = new StreamSource[] {
				    new StreamSource(new File("/Users/jcarl/www.web3d.org/specifications/xmldsig-core-schema.xsd")),
				    new StreamSource(new File("/Users/jcarl/www.web3d.org/specifications/x3d-4.0.xsd"))
				};
			    Schema schema = sf.newSchema(schemaSources);

			    // Schema schema = sf.newSchema(new URL("https://www.web3d.org/specifications/x3d-4.0.xsd"));
			    Validator validator = schema.newValidator();
			    DOMSource source = new DOMSource(document);
			    validator.validate(source);
		    } catch (SAXException e) {
			    e.printStackTrace(System.err);
			    System.exit(1);  //  failed
		    }
		    ser.write(document, output);
		    String xml = writer.toString();
		    log(xml);
	    }
	}

	public static void main(String [] args) throws IOException {
	    for (int a = 0; a < args.length; a++) {
            	CPPONGrammarDOMVisitor root = new CPPONGrammarDOMVisitor(args[a]);
	    }
	}

	@Override
	public Node visitX3d(CPPONGrammarParser.X3dContext ctx) {
		try {
			DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
			dbf.setNamespaceAware(true);
			dbf.setValidating(true);
			DocumentBuilder db = dbf.newDocumentBuilder();
			document = db.newDocument();
			if (document == null) {
				log("document is null\n");
			}

			Element child = null;
			List<CPPONGrammarParser.LineContext> lines = ctx.line();
			Iterator<CPPONGrammarParser.LineContext> i = lines.iterator();
			while (i.hasNext()) {
				CPPONGrammarParser.LineContext lc = i.next();
				CPPONGrammarParser.ConstructContext cc = lc.construct();
				if (cc != null) {
					Element childNode = (Element)visitConstruct(cc);
					if (child == null) {
						child = childNode;
					}
				}
				CPPONGrammarParser.Set_fieldContext sfc = lc.set_field();
				if (sfc != null) {
					visitSet_field(sfc);
				}
				CPPONGrammarParser.Add_fieldContext afc = lc.add_field();
				if (afc != null) {
					visitAdd_field(afc);
				}
			}

			if (document != null && child != null) {
				DOMImplementation domImplementation = db.getDOMImplementation();
				DocumentType doctype = domImplementation.createDocumentType("X3D", "ISO//Web3D//DTD X3D 4.0//EN", "file:/C:/Users/jcarl/www.web3d.org/specifications/x3d-4.0.dtd");
				document.appendChild(doctype);
				// document.appendChild(document.createTextNode("\n"));
				document.appendChild(child);
				child.setAttribute("xmlns", "http://www.web3d.org/specifications/x3d-namespace");
				child.setAttribute("xmlns:xsd",  "https://www.w3.org/2001/XMLSchema-instance");
				child.setAttribute("profile", "Immersive");
				child.setAttribute("version", "4.0");
				// child.setAttribute("xsd:schemaLocation", "https://www.web3d.org/specifications/x3d-4.0.xsd");

			} else {
				log("Got nothing from visiting Children");
			}
		} catch (ParserConfigurationException e) {
			e.printStackTrace(System.err);
		}
		return (Node)document;
	}

	@Override public Node visitConstruct(CPPONGrammarParser.ConstructContext ctx) {
		Node node = super.visitChildren(ctx);
		CPPONGrammarParser.TypeContext tc = ctx.type();
		CPPONGrammarParser.FunccallContext fc = ctx.funccall();
		CPPONGrammarParser.VariableContext vp = fc.variable();
		CPPONGrammarParser.OperatorContext op = fc.operator();
		CPPONGrammarParser.ParametersContext pa = fc.parameters();

		String typstr = tc.getText();
		String tystr = vp.getText();

		TerminalNode eq = op.EQUALS();
		TerminalNode fn = fc.IDENTIFIER();

		// log("Creating ");log(typstr); log(" "); log(tystr); log(eq); log(fn); log(pa); log("\n");
		switch (typstr) {
			case "Connect":
				typstr = "connect";
				break;
			case "CFontStyle":
				typstr = "FontStyle";
				break;
			case "CColor":
				typstr = "Color";
				break;
		}
		if (!tystr.toLowerCase().startsWith(typstr.toLowerCase())) {
			log(tystr+" != "+typstr+"\n");
		}
		Element child = document.createElement(typstr);
		this.nodes.put(tystr, child);
		return (Node)child;
	}

	@Override public Node visitVariable(CPPONGrammarParser.VariableContext ctx) {
		String variable = ctx.getText();
		Element child = nodes.get(variable);
		return (Node)child;
	}

	public Element elementSetAttribute(Element element, String attributeName, String value, boolean isArray) {
		if (!attributeName.equals("DEF") && !attributeName.equals("USE")) {
			attributeName = attributeName.substring(0,1).toLowerCase()+attributeName.substring(1);
		}
		if (attributeName.equals("containerField")) {
			value = value.substring(0,1).toLowerCase()+value.substring(1);
		}
		if (isArray) {
			value = value.replaceAll(",", " ");
		}
		element.setAttribute(attributeName, value);
		return element;
	}

	public Element elementSetAttribute(Element element, TerminalNode field, String value, boolean isArray) {
		String attributeName = field.getText();
		this.elementSetAttribute(element, attributeName, value, isArray);
		return element;
	}

	private Node processFunccall(CPPONGrammarParser.FunccallContext fc) {
		CPPONGrammarParser.VariableContext vp = fc.variable();
		CPPONGrammarParser.OperatorContext op = fc.operator();
		CPPONGrammarParser.ParametersContext pa = fc.parameters();

		Node parent = visitVariable(vp);

		TerminalNode set = op.SET();
		TerminalNode add = op.ADD();
		TerminalNode x3dnodeset = op.X3DNODESET();
		TerminalNode fn = fc.IDENTIFIER();

		if (add == null) {
			String text = "";
			if (parent != null) {
				if (pa != null && pa.parameter().size() > 0) {
					CPPONGrammarParser.ParameterContext param = pa.parameter(0);
					CPPONGrammarParser.CstringContext cs = param.cstring();
					CPPONGrammarParser.Construct_arrayContext array = param.construct_array();
					CPPONGrammarParser.VariableContext vc = param.variable();

					if (cs != null) {
						CPPONGrammarParser.StringContext sc = cs.string();
						int start = sc.start.getStartIndex();
						int stop = sc.stop.getStopIndex();
						Interval interval = new Interval(start,stop);
						text = sc.start.getInputStream().getText(interval);
						if (text.startsWith("\"") && text.endsWith("\"")) {
							text = text.substring(1, text.length() - 1);
						}
						this.elementSetAttribute((Element)parent, fn, text, false);
					} else if (array != null) {
						CPPONGrammarParser.ListContext list = array.list();
						if (list != null) {
							CPPONGrammarParser.Boolean_listContext boolean_list = list.boolean_list();
							CPPONGrammarParser.String_listContext string_list = list.string_list();
							CPPONGrammarParser.Float_listContext float_list = list.float_list();
							CPPONGrammarParser.Integer_listContext integer_list = list.integer_list();
							if (float_list != null) {
								int start = float_list.start.getStartIndex();
								int stop = float_list.stop.getStopIndex();
								Interval interval = new Interval(start,stop);
								text = float_list.start.getInputStream().getText(interval);
								this.elementSetAttribute((Element)parent, fn, text, true);
							} else if (integer_list != null) {
								int start = integer_list.start.getStartIndex();
								int stop = integer_list.stop.getStopIndex();
								Interval interval = new Interval(start,stop);
								text = integer_list.start.getInputStream().getText(interval);
								this.elementSetAttribute((Element)parent, fn, text, true);
							} else if (boolean_list != null) {
								int start = boolean_list.start.getStartIndex();
								int stop = boolean_list.stop.getStopIndex();
								Interval interval = new Interval(start,stop);
								text = boolean_list.start.getInputStream().getText(interval);
								this.elementSetAttribute((Element)parent, fn, text, true);
							} else if (string_list != null) {
								List<CPPONGrammarParser.StringContext> stringCtxList = string_list.string();
								Iterator<CPPONGrammarParser.StringContext> i = stringCtxList.iterator();
								boolean first = true;
								while (i.hasNext()) {
									if (first) {
										first = false;
									} else {
										text += " ";
									}
									CPPONGrammarParser.StringContext sc = i.next();
									int start = sc.start.getStartIndex();
									int stop = sc.stop.getStopIndex();
									Interval interval = new Interval(start,stop);
									text += sc.start.getInputStream().getText(interval);
								}
								this.elementSetAttribute((Element)parent, fn, text, false);
							}
						} else {
							// For empty arrays
							this.elementSetAttribute((Element)parent, fn, "", true);
						}
					} else if (vc != null) {
						Node child = visitVariable(vc);

						// If child != null, it's a Node appending operation.
						if (child != null) {
							String containerFieldName = fn.getText();
							if (containerFieldName.toLowerCase().endsWith("metadata") || containerFieldName.toLowerCase().endsWith("url") || containerFieldName.toLowerCase().endsWith("texture")) {
								this.elementSetAttribute((Element)child, "containerField", containerFieldName, false);
							}
							parent.appendChild(child);
							return (Node)parent;
						} else {
							// If child == null, vc is likely a literal constant/enum identifier.
							// Treat as standard attribute value fallback.
							int start = pa.start.getStartIndex();
							int stop = pa.stop.getStopIndex();
							Interval interval = new Interval(start,stop);
							text = pa.start.getInputStream().getText(interval);
							this.elementSetAttribute((Element)parent, fn, text, false);
						}
					} else if (param.string() != null) {
						CPPONGrammarParser.StringContext sc = param.string();
						int start = sc.start.getStartIndex();
						int stop = sc.stop.getStopIndex();
						Interval interval = new Interval(start,stop);
						text = sc.start.getInputStream().getText(interval);
						if (text.startsWith("\"") && text.endsWith("\"")) {
							text = text.substring(1, text.length() - 1);
						}
						this.elementSetAttribute((Element)parent, fn, text, false);
					} else {
						int start = pa.start.getStartIndex();
						int stop = pa.stop.getStopIndex();
						Interval interval = new Interval(start,stop);
						text = pa.start.getInputStream().getText(interval);
						this.elementSetAttribute((Element)parent, fn, text, false);
					}
				} else if (pa != null) {
					int start = pa.start.getStartIndex();
					int stop = pa.stop.getStopIndex();
					Interval interval = new Interval(start,stop);
					text = pa.start.getInputStream().getText(interval);
					this.elementSetAttribute((Element)parent, fn, text, false);
				}
			}
		} else if (add != null) {
			if (pa != null && pa.parameter().size() > 0) {
				CPPONGrammarParser.ParameterContext param = pa.parameter(0);
				CPPONGrammarParser.VariableContext vc = param.variable();
				if (vc != null) {
					Node child = visitVariable(vc);
					String containerFieldName = fn.getText();
					// Safety Check to ensure child actually exists
					if (child != null) {
						if (containerFieldName.toLowerCase().endsWith("metadata") || containerFieldName.toLowerCase().endsWith("url") || containerFieldName.toLowerCase().endsWith("texture")) {
							this.elementSetAttribute((Element)child, "containerField", containerFieldName, false);
						}
						parent.appendChild(child);
					} else {
						System.err.println("Null child mapping during add_field. Unrecognized Variable: " + vc.getText());
					}
				}
			}
			return (Node)parent;
		}
		return null; // Return null signals parent handler to fallback to super.visitChildren
	}

	@Override public Node visitSet_field(CPPONGrammarParser.Set_fieldContext ctx) {
		Node result = processFunccall(ctx.funccall());
		if (result != null) return result;
		return super.visitChildren(ctx);
	}

	@Override public Node visitAdd_field(CPPONGrammarParser.Add_fieldContext ctx) {
		Node result = processFunccall(ctx.funccall());
		if (result != null) return result;
		return super.visitChildren(ctx);
	}
}
