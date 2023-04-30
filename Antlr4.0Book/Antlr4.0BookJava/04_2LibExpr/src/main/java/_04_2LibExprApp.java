import libExpr.LibExprLexer;
import libExpr.LibExprParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;

public class _04_2LibExprApp {
    public static void main(String[] args) {
        String inputText = "a=1+2\n" +
                " b=a+1\n" +
                " c=a+b\n";
        CodePointCharStream input = CharStreams.fromString(inputText);
        LibExprLexer lexer = new LibExprLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        LibExprParser parser = new LibExprParser(tokens);
        ParseTree tree = parser.prog();
        System.out.println(tree.toStringTree(parser));
    }
}
