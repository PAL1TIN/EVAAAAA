#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


int main() {
char c;
float v;
Calc* calc;
Calc* c1;

calc = cria_calc("%.2f\n");

do {

scanf(" %c",&c);

if (c=='+' || c=='-' || c=='*' || c=='/'||c == '^') {
operador(calc,c);
}
if(c=='&' ){
    ope1(calc,c);
}

else {
ungetc(c,stdin);
if (scanf("%f",&v) == 1){
    operando(calc,v);
}
}
} while (c!='q');
libera_calc(calc);

    return 0;
}
