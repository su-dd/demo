import arrayInit.ArrayInitLexer;
import arrayInit.ArrayInitParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

public class _03ArrayApp {
    public static void main(String[] args) {
        String test = "{99, 2, 3, 4}";
        CodePointCharStream input = CharStreams.fromString(test);
        ArrayInitLexer lexer = new ArrayInitLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);

        ArrayInitParser parser = new ArrayInitParser(tokens);
        ParseTree tree = parser.init();

        System.out.println(tree.toStringTree(parser));

        ParseTreeWalker walker = new ParseTreeWalker();

        walker.walk(new ShortToUnicodeString(), tree);
        System.out.println();
    }
}
