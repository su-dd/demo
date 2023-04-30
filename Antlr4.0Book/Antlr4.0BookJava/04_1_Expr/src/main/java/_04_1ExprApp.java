import expr.ExprLexer;
import expr.ExprParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;

public class _04_1ExprApp {
    public static void main(String[] args) {
        String inputText = "a=1+2\n" +
                " b=a+1\n" +
                " c=a+b\n";
        CodePointCharStream input = CharStreams.fromString(inputText);
        ExprLexer lexer = new ExprLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        ExprParser parser = new ExprParser(tokens);
        ParseTree tree = parser.prog();
        System.out.println(tree.toStringTree(parser));
    }
}
