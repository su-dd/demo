import File.FileLoad;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import javaLanguage.JavaLexer;
import javaLanguage.JavaParser;

public class _04_4ExtractInterfaceApp {
    public static void main(String[] args) {
        FileLoad fileLoad = new FileLoad();
        String inputText = fileLoad.getResourcesFileContent ("demo/Demo.java");
        CodePointCharStream input = CharStreams.fromString(inputText);
        JavaLexer lexer = new JavaLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        JavaParser parser = new JavaParser(tokens);
        ParseTree tree = parser.compilationUnit(); // 开始语法分析过程

        ParseTreeWalker walker = new ParseTreeWalker(); // 新建一个标准的遍历器
        ExtractInterfaceListener listener = new ExtractInterfaceListener(parser);
        walker.walk(listener, tree);
    }


}
