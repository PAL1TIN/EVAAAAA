#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include "pilha.h"
#include <math.h>

Calc* cria_calc(char* formato) {
    Calc* c = (Calc*) malloc(sizeof(Calc));
    strcpy(c->f,formato);
    c->p = cria();
return c;
}

void operando(Calc* c, float v) {
    push(c->p, v);
    printf(c->f, v);
}
void ope1(Calc* c, char op){
    float v, v1;

    if (vazia(c->p)){
        v1 = 0.0;
    }else{
        v1 = pop(c->p);
    }
    v = sqrt(v1);//Tem q passar somente UM valor


    push(c->p, v);
    printf(c->f, v);


}

void operador(Calc* c, char op) {
    float v1, v2, v;

    if (vazia(c->p)){
        v2 = 0.0;
    }else{
        v2 = pop(c->p);
    }

    if (vazia(c->p)){
        v1 = 0.0;
    }else{
        v1 = pop(c->p);
    }


    switch(op) {
    case '+':
        v = v1 + v2;
        break;
    case '-':
        v = v1 - v2;
        break;
    case '*':
        v = v1 * v2;
        break;
    case '/':
        v = v1 / v2;
        break;

    case '^':
        v = v1;
        for(int i = 1; i < v2; i++){
            v = v * v1;
        }



    }

    push(c->p, v);
    printf(c->f, v);
}

void libera_calc(Calc* c) {
    libera(c->p);
    free(c);
}
