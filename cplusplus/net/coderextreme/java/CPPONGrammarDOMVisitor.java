import org.w3c.dom.Node;
import org.w3c.dom.Document;
import org.antlr.v4.runtime.atn.PredictionMode;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.ANTLRFileStream;
import org.antlr.v4.runtime.RecognitionException;
import java.io.IOException;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

public class CPPONGrammarDOMVisitor<Node extends org.w3c.dom.Node> extends CPPONGrammarBaseVisitor<Node> implements CPPONGrammarVisitor<Node> {
	public CPPONGrammarDOMVisitor(String[] args) throws IOException {
		// first parse
	    CharStream input = new ANTLRFileStream(args[0]);
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

	    Node node = this.visitX3d(ctx);
	}
	public static void main(String [] args) throws IOException {
            CPPONGrammarDOMVisitor root = new CPPONGrammarDOMVisitor(args);
	}
	@Override
	public Node visitX3d(CPPONGrammarParser.X3dContext ctx) {
		try {
			Node node = super.visitChildren(ctx);
			DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
			dbf.setNamespaceAware(true);
			dbf.setValidating(true);
			DocumentBuilder db = dbf.newDocumentBuilder();
			Document document = db.newDocument();
			document.appendChild(node);
			return (Node)document;
		} catch (ParserConfigurationException e) {
			e.printStackTrace(System.err);
		}
		return null;
	}
}
