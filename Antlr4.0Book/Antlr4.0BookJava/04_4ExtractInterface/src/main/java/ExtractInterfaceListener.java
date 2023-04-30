import org.antlr.v4.runtime.TokenStream;

import javaLanguage.JavaBaseListener;
import javaLanguage.JavaParser;

public class ExtractInterfaceListener extends JavaBaseListener {
    JavaParser parser;

    public ExtractInterfaceListener(JavaParser parser) {
        this.parser = parser;
    }

    /**
     * {@inheritDoc}
     *
     * <p>The default implementation does nothing.</p>
     *
     * @param ctx
     */
    @Override
    public void enterImportDeclaration(JavaParser.ImportDeclarationContext ctx) {
        System.out.println(parser.getTokenStream().getText(ctx));
    }

    /**
     * {@inheritDoc}
     *
     * <p>The default implementation does nothing.</p>
     *
     * @param ctx
     */
    @Override
    public void enterClassDeclaration(JavaParser.ClassDeclarationContext ctx) {
        System.out.println("interface I" + ctx.Identifier() + " {");
    }

    /**
     * {@inheritDoc}
     *
     * <p>The default implementation does nothing.</p>
     *
     * @param ctx
     */
    @Override
    public void exitClassDeclaration(JavaParser.ClassDeclarationContext ctx) {
        System.out.println("}");
    }

    /**
     * {@inheritDoc}
     *
     * <p>The default implementation does nothing.</p>
     *
     * @param ctx
     */
    @Override
    public void enterMethodDeclaration(JavaParser.MethodDeclarationContext ctx) {
        TokenStream tokens = parser.getTokenStream();
        String type = "void";

        if ( ctx.datatype() != null) {
            type = tokens.getText(ctx.datatype());
        }
        String args = tokens.getText(ctx.formalParameters());
        System.out.println("\t" + type + " " + ctx.Identifier() + args + ";");
    }
}
