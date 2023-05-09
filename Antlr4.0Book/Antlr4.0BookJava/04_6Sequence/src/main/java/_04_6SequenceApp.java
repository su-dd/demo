import data.DataLexer;
import data.DataParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;

public class _04_6SequenceApp {
    public static void main(String[] args) {
        String test = "2 3 4 2 8 9 \n";
        CodePointCharStream input = CharStreams.fromString(test);
        DataLexer lexer = new DataLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        DataParser parser = new DataParser(tokens);
        System.out.println(parser.file().toStringTree());
        System.out.println(parser.file().toStringTree());






//        HelloLexer lexer = new HelloLexer(input);
//        CommonTokenStream tokens = new CommonTokenStream(lexer);
//        HelloParser parser = new HelloParser(tokens);
//        System.out.println(parser.r().toStringTree(parser));
    }
}
