import File.FileLoad;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import rows.RowsLexer;
import rows.RowsParser;

import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;

public class _04_5RowsApp {
    public static void main(String[] args) {
        FileLoad fileLoad = new FileLoad();
        InputStream inputStream = fileLoad.getResourceAsStream ("./t.rows");
        CharStream input = null;
        try {
            input = CharStreams.fromStream(inputStream);
        } catch (IOException e) {
            e.printStackTrace();
        }

        RowsLexer lexer = new RowsLexer(input);
        CommonTokenStream tokenStream = new CommonTokenStream(lexer);
        RowsParser parser = new RowsParser(tokenStream, 1);
        parser.setBuildParseTree(false); // 不需要浪费时间建立语法分析树
        ParseTree tree = parser.file();
        System.out.println(tree);
    }
}
