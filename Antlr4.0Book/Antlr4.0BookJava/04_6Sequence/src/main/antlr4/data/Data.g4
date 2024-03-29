grammar Data;

file    : group+    ;

group   :  INT sequence[$INT.int] ;

sequence[int n]
locals [int i = 1;]
    : ( {$i <= $n}? INT {$i++;} )*  // 匹配 n 个整数
    ;

INT :   [0-9]+  ;                   // 匹配整数
WS  :   [ \t\n\r]+    ->  skip ;     // 丢弃所有的空白字符