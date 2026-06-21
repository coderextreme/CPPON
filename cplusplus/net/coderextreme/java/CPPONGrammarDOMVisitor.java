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
				    new StreamSource(new File("C:/Users/jcarl/www.web3d.org/specifications/xmldsig-core-schema.xsd")),
				    new StreamSource(new File("C:/Users/jcarl/www.web3d.org/specifications/x3d-4.1.xsd"))
				};
			    Schema schema = sf.newSchema(schemaSources);
		    } catch (SAXParseException e) {
			    e.printStackTrace(System.err);
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
			DOMImplementation domImplementation = db.getDOMImplementation();
			DocumentType doctype = domImplementation.createDocumentType("X3D", "ISO//Web3D//DTD X3D 4.1//EN", "https://www.web3d.org/specifications/x3d-4.1.dtd");
			document = db.newDocument();
			if (document == null) {
				log("document is null\n");
			} else {
				document.appendChild(doctype);
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
				document.appendChild(child);

				// 1. MUST use setAttributeNS with the special XMLNS URI to declare the prefix
				child.setAttributeNS("http://www.w3.org/2000/xmlns/", "xmlns:xsd", "http://www.w3.org/2001/XMLSchema-instance");

				// 2. MUST use setAttributeNS with the XMLSchema-instance URI to apply the schema location
				child.setAttributeNS("http://www.w3.org/2001/XMLSchema-instance", "xsd:noNamespaceSchemaLocation", "https://www.web3d.org/specifications/x3d-4.1.xsd");

				// Standard attributes set with null namespace to ensure localName is populated properly in namespace-aware DOM
				child.setAttributeNS(null, "profile", "Immersive");
				child.setAttributeNS(null, "version", "4.1");

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

		switch (typstr) {
			case "Connect": typstr = "connect"; break;
			case "CFontStyle": typstr = "FontStyle"; break;
			case "CColor": typstr = "Color"; break;
			case "Export": typstr = "EXPORT"; break;
		}
		if (!tystr.toLowerCase().startsWith(typstr.toLowerCase())) {
			log(tystr+" != "+typstr+"\n");
		}
		// VITAL FIX: Use createElementNS with null namespace to populate localName so Validator can see it
		Element child = document.createElementNS(null, typstr);
		this.nodes.put(tystr, child);
		return (Node)child;
	}

	@Override public Node visitVariable(CPPONGrammarParser.VariableContext ctx) {
		String variable = ctx.getText();
		Element child = nodes.get(variable);
		return (Node)child;
	}

	public Element elementSetAttribute(Element element, String attributeName, String value, boolean isArray) {
		if (!attributeName.equals("DEF") && !attributeName.equals("USE") && !attributeName.equals("AS")) {
			attributeName = attributeName.substring(0,1).toLowerCase()+attributeName.substring(1);
		}
		if (attributeName.equals("containerField")) {
			value = value.substring(0,1).toLowerCase()+value.substring(1);
		}
		// Array comma replacement was safely moved inside extractTextFromParameter to avoid stripping
		// commas nested within quotes in string literals.
		// VITAL FIX: Use setAttributeNS with null namespace to populate localName for standard attributes
		element.setAttributeNS(null, attributeName, value);
		return element;
	}

	public Element elementSetAttribute(Element element, TerminalNode field, String value, boolean isArray) {
		String attributeName = field.getText();
		this.elementSetAttribute(element, attributeName, value, isArray);
		return element;
	}

	// ---------------- Helper Methods For Unwrapping Rules ----------------

	private String getOriginalText(ParserRuleContext ctx) {
		if (ctx == null) return "";
		int start = ctx.start.getStartIndex();
		int stop = ctx.stop.getStopIndex();
		Interval interval = new Interval(start, stop);
		return ctx.start.getInputStream().getText(interval);
	}

	private String cleanString(CPPONGrammarParser.StringContext sc) {
		String text = getOriginalText(sc);
		if (text.startsWith("\"") && text.endsWith("\"")) {
			text = text.substring(1, text.length() - 1);
		}
		return text;
	}

	private CPPONGrammarParser.VariableContext resolveVariable(CPPONGrammarParser.ParameterContext param) {
		if (param == null) return null;
		// If variable resolves instantly (C-style cast or standard pass)
		if (param.variable() != null) return param.variable();
		// If wrapped in a static_cast<...>(...), recurse through to find the inner node variable
		if (param.cpp_cast() != null) return resolveVariable(param.cpp_cast().parameter());
		return null;
	}

	private String extractTextFromParameter(CPPONGrammarParser.ParameterContext param) {
		if (param.cstring() != null) {
			return cleanString(param.cstring().string());
		} else if (param.string() != null) {
			return cleanString(param.string());
		} else if (param.construct_array() != null) {
			CPPONGrammarParser.ListContext list = param.construct_array().list();
			if (list == null) return "";
			// Extract and replace commas with spaces specifically for numeric/boolean arrays
			if (list.float_list() != null) return getOriginalText(list.float_list()).replaceAll(",", " ");
			if (list.integer_list() != null) return getOriginalText(list.integer_list()).replaceAll(",", " ");
			if (list.boolean_list() != null) return getOriginalText(list.boolean_list()).replaceAll(",", " ");

			// Properly encapsulate each string parameter into an X3D MFString compatible format ("String1" "String2")
			if (list.string_list() != null) {
				StringBuilder sb = new StringBuilder();
				boolean first = true;
				for (CPPONGrammarParser.StringContext sc : list.string_list().string()) {
					if (!first) sb.append(" ");
					first = false;
					sb.append("\"").append(cleanString(sc)).append("\"");
				}
				return sb.toString();
			}
		}
		// Fallback for direct primitives (float, whole, boolean keyword etc.)
		return getOriginalText(param);
	}

	// ---------------- Core Funccall Processor ----------------

	private Node processFunccall(CPPONGrammarParser.FunccallContext fc) {
		CPPONGrammarParser.VariableContext vp = fc.variable();
		CPPONGrammarParser.OperatorContext op = fc.operator();
		CPPONGrammarParser.ParametersContext pa = fc.parameters();

		Node parent = visitVariable(vp);
		if (parent == null) {
			return null;
		}

		// Reconstruct the logical method name cleanly regardless of how it was matched
		String opText = op.getText();
		String idText = fc.IDENTIFIER().getText();
		String fullMethod = opText.startsWith(".") ? opText.substring(1) + idText : opText + idText;

		// Strip off any C++ namespaces (e.g., "X3DGroupingNode::addChild" -> "addChild")
		int nsIdx = fullMethod.lastIndexOf("::");
		if (nsIdx >= 0) {
			fullMethod = fullMethod.substring(nsIdx + 2);
		}

		boolean isAdd = fullMethod.startsWith("add");
		String attrName = "";
		if (isAdd) {
			attrName = fullMethod.substring(3); // e.g. "Child", "Children"
		} else if (fullMethod.startsWith("set")) {
			attrName = fullMethod.substring(3); // e.g. "DEF", "Shape", "KeyValue"
		} else {
			attrName = fullMethod; // strict fallback
		}

		if (pa != null && !pa.parameter().isEmpty()) {
			// Find the best parameter: Prefer variables/arrays over ints if multiple exist (like setKeyValue)
			CPPONGrammarParser.ParameterContext targetParam = pa.parameter(0);
			for (CPPONGrammarParser.ParameterContext p : pa.parameter()) {
				if (p.construct_array() != null || resolveVariable(p) != null) {
					targetParam = p;
					break;
				}
			}

			CPPONGrammarParser.VariableContext vc = resolveVariable(targetParam);
			if (vc != null) {
				Node child = visitVariable(vc);
				if (child != null) {
					// We are appending a DOM node child
					String containerHint = attrName;
					if (containerHint.toLowerCase().endsWith("metadata") ||
						containerHint.toLowerCase().endsWith("url") ||
						containerHint.toLowerCase().endsWith("texture") ||
						containerHint.toLowerCase().equals("shape") ||
						containerHint.toLowerCase().equals("appearance") ||
						containerHint.toLowerCase().equals("material") ||
						containerHint.toLowerCase().equals("geometry") ||
						containerHint.toLowerCase().equals("fontstyle") ||
						containerHint.toLowerCase().equals("color") ||
						containerHint.toLowerCase().equals("coord") ||
						containerHint.toLowerCase().equals("normal") ||
						containerHint.toLowerCase().equals("texcoord")) {
						this.elementSetAttribute((Element)child, "containerField", containerHint, false);
					}
					parent.appendChild(child);
					return (Node)parent;
				} else {
					System.err.println("Null child mapping during element injection. Unrecognized Variable: " + vc.getText());
				}
			}

			// We are assigning a primitive string/value/array attribute
			boolean isArray = targetParam.construct_array() != null;
			String text = extractTextFromParameter(targetParam);
			this.elementSetAttribute((Element)parent, attrName, text, isArray);
		}

		return (Node)parent;
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
