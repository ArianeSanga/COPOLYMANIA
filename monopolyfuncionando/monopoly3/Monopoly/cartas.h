#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STACK_SIZE 23

struct Carta {
    char descricao[100];
    int acao;
};

struct Pilha {
    struct Carta info;
    struct Pilha* next;
};

typedef struct Pilha* PilhaCartas;

void initCartas(PilhaCartas* pilha);
bool is_emptyCartas(PilhaCartas pilha);
bool pushCarta(PilhaCartas* pilha, struct Carta elemento);
bool popCarta(PilhaCartas* pilha, struct Carta* elemento);
void criarCartas(PilhaCartas* pilha);