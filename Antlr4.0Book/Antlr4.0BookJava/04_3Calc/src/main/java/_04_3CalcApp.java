import labeledExpr.LabeledExprLexer;
import labeledExpr.LabeledExprParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;

public class _04_3CalcApp {
    public static void main(String[] args) {
        String inputText = "a=1+2\n" +
                " b=a+1\n" +
                " c=a+b\n";
        CodePointCharStream input = CharStreams.fromString(inputText);
        LabeledExprLexer lexer = new LabeledExprLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        LabeledExprParser parser = new LabeledExprParser(tokens);
        ParseTree tree = parser.prog();
        System.out.println(tree.toStringTree(parser));

        EvalVisitor visitor = new EvalVisitor();
        Integer result = visitor.visit(tree);
        System.out.println(result);
    }
}
