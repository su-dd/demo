import File.FileLoad;

import javaLanguage.JavaLexer;
import javaLanguage.JavaParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

public class _04_8InsertSerialIDApp {
    public static void main(String[] args) {
        FileLoad fileLoad = new FileLoad();
        String inputText = fileLoad.getResourcesFileContent ("demo/Demo.java");
        CodePointCharStream input = CharStreams.fromString(inputText);
        JavaLexer lexer = new JavaLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        JavaParser parser = new JavaParser(tokens);
        ParseTree tree = parser.compilationUnit(); // 开始语法分析过程

        ParseTreeWalker walker = new ParseTreeWalker(); // 新建一个标准的遍历器
        InsertSerialIDListener listener = new InsertSerialIDListener(tokens);
        walker.walk(listener, tree); // 使用监听器初始化对语法分析树的遍历

        System.out.println(listener.rewriter.getText());
    }
}
