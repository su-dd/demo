grammar Rows;

@parser::members { // 在生成的 RowsParser 中添加一些成员
    int col;
    public RowsParser(TokenStream input, int col) { // 自定义的构造器
        this(input);
        this.col = col;
    }
}

file: (row NL)+ ;

row
locals [int i = 0]
    :   (   STUFF
            {
            $i++;
            if ( $i == col ) System.out.println($STUFF.text);
            }
        )+
    ;

TAB  :  '\t' -> skip ;   // match but don't pass to the parser
NL   :  '\r'? '\n' ;     // match and pass to the parser
STUFF:  ~[\t\r\n]+ ;     // match any chars except tab, newline
