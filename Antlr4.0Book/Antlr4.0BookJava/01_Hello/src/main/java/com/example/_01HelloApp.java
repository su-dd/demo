package com.example;

import com.example.hello.HelloLexer;
import com.example.hello.HelloParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;

public class _01HelloApp {
    public static void main(String[] args) {
        String test = "hello world";
        CodePointCharStream input = CharStreams.fromString(test);
        HelloLexer lexer = new HelloLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        HelloParser parser = new HelloParser(tokens);
        System.out.println(parser.r().toStringTree(parser));
    }
}
