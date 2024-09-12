#ifndef PILHA_H
#define PILHA_H





typedef struct no { //criando no da pilha
    float info;
    struct no* prox;
} No;

typedef struct pilha {
    No* prim;
} Pilha;

//funcoes da pilha
Pilha* cria(void);
void push(Pilha* p, float v);
float pop(Pilha* p);
int vazia(Pilha* p);
void libera(Pilha* p);
void imprime(Pilha* p);
No* ins_ini(No* l, float v);
No* ret_ini(No* l);


#endif PILHA_H
