import File.FileLoad;
import org.abego.treelayout.internal.util.java.lang.string.StringUtil;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.Token;
import xmlLexer.XMLLexer;

import java.io.IOException;
import java.io.InputStream;

public class _04_7XMLLexerApp {
    public static void main(String[] args) {
        FileLoad fileLoad = new FileLoad();
        InputStream inputStream = fileLoad.getResourceAsStream("./t.xml");
        CharStream input = null;
        try {
            input = CharStreams.fromStream(inputStream);
        } catch (IOException e) {
            e.printStackTrace();
        }

        XMLLexer lexer = new XMLLexer(input);

        Token token = lexer.nextToken();
        while (token.getType() != Token.EOF) {
            String txt = token.getText();
            if (txt != null && !txt.isEmpty() && !txt.isBlank()) {
                txt = txt.replace("\n", "\\n");
                txt = txt.replace("\r", "\\r");
                txt = txt.replace("\t", "\\t");
            } else {
                txt = "<no text>";
            }

            System.out.printf("channel: %d, line: %d, positionInLine: %d, start: %d, stop: %d, type: %d, value: %s",
                    token.getChannel(),
                    token.getLine(),
                    token.getCharPositionInLine(),
                    token.getStartIndex(),
                    token.getStopIndex(),
                    token.getType(),
                    txt
            );
            System.out.println("");
            token = lexer.nextToken();
        }
    }
}
