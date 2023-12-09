#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define TAMANHO_TABULEIRO 40
#define LISTA_MAX_SIZE 28

struct Propriedade {
    int posicao; 
    char nome[50];
    char descricao[200];
    char dono[50];
    int preco;
    int aluguel;
};

typedef struct Tabuleiro {
    struct Propriedade Info;
    struct Tabuleiro* next;
} Tabuleiro;

void inicializarTabuleiro(Tabuleiro** tab);
void adicionarAoFinal(Tabuleiro* cabeca, struct Propriedade propriedade);
void imprimirTabuleiro(Tabuleiro* tab);
struct Propriedade buscarPorPosicao(Tabuleiro* tab, int posicao);
void alterarPropriedade(Tabuleiro* tab, int posicao, char* dono, int symbol);
void atualizaTabuleiro(Tabuleiro* tab);