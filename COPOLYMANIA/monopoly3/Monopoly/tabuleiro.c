#include "tabuleiro.h"

void inicializarTabuleiro(Tabuleiro** tab) {
    *tab = (Tabuleiro*)malloc(sizeof(Tabuleiro));
    (*tab)->next = *tab;

    (*tab)->Info.posicao = 1;  // Alterado de "posicao = "1"" para "posicao = '1'"
    strcpy((*tab)->Info.nome, "Avenida da Prosperidade");
    strcpy((*tab)->Info.descricao, "Uma movimentada avenida comercial onde os negocios florescem. Compre para construir seu imperio empresarial.");
    strcpy((*tab)->Info.dono, " ");
    (*tab)->Info.preco = 250;
    (*tab)->Info.aluguel = 50;

    (*tab)->next = *tab;
}

void adicionarAoFinal(Tabuleiro* cabeca, struct Propriedade propriedade) {
    Tabuleiro* novoNodo = (Tabuleiro*)malloc(sizeof(Tabuleiro));

    novoNodo->Info.posicao = propriedade.posicao;
    strcpy(novoNodo->Info.nome, propriedade.nome);
    strcpy(novoNodo->Info.descricao, propriedade.descricao);
    strcpy(novoNodo->Info.dono, propriedade.dono);
    novoNodo->Info.preco = propriedade.preco;
    novoNodo->Info.aluguel = propriedade.aluguel;

    novoNodo->next = cabeca;

    Tabuleiro* ultimo = cabeca;
    while (ultimo->next != cabeca) {
        ultimo = ultimo->next;
    }
    ultimo->next = novoNodo;
}

void imprimirTabuleiro(Tabuleiro* tab) {
    if (tab == NULL) {
        printf("Tabuleiro vazio.\n");
        return;
    }

    Tabuleiro* ultimo = tab;
    do {
        printf("\n%d\n", ultimo->Info.posicao);
        ultimo = ultimo->next;
    } while (ultimo != tab);
}


struct Propriedade buscarPorPosicao(Tabuleiro* tab, int posicao) {
    struct Propriedade propriedadeNula;  // Retorna uma propriedade nula se não encontrar
    propriedadeNula.posicao = -1;

    if (tab == NULL) {
        printf("Tabuleiro vazio.\n");
        return propriedadeNula;
    }

    Tabuleiro* atual = tab;
    do {
        if (atual->Info.posicao == posicao) {
            return atual->Info;  // Propriedade encontrada
        }
        atual = atual->next;
    } while (atual != tab && atual != NULL);

    printf("Propriedade na posicao %d nao encontrada.\n", posicao);
    return propriedadeNula;  // Retorna propriedade nula se não encontrada
}

void alterarPropriedade(Tabuleiro* tab, int posicao, char* dono, int symbol) {
    if (tab == NULL) {
        printf("Tabuleiro vazio.\n");
        return;
    }

    Tabuleiro* atual = tab;
    do {
        if (atual->Info.posicao == posicao) {
            // Altera o dono e a posição do elemento correspondente
            strcpy(atual->Info.dono, dono);
            atual->Info.posicao = symbol;
            return;
        }
        atual = atual->next;
    } while (atual != tab && atual != NULL);

    printf("Propriedade na posicao %d nao encontrada.\n", posicao);
}

void atualizaTabuleiro(Tabuleiro* tab) {
    if (tab == NULL) {
        printf("Tabuleiro vazio.\n");
        return;
    }

    Tabuleiro* atual = tab;
    int novaPosicao = 1;

    do {
        atual->Info.posicao = novaPosicao++;
        atual = atual->next;
    } while (atual != tab && atual != NULL);
}