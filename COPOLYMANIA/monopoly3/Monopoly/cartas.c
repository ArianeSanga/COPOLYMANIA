#include "cartas.h"

void initCartas(PilhaCartas *pilha)
{
    *pilha = NULL;
}

bool is_emptyCartas(PilhaCartas pilha)
{
    return pilha == NULL;
}

bool pushCarta(PilhaCartas *pilha, struct Carta elemento)
{
    struct Pilha *novo = (struct Pilha *)malloc(sizeof(struct Pilha));
    if (novo == NULL)
    {
        return false; // Falha na alocação de memória
    }

    novo->info = elemento;
    novo->next = *pilha;
    *pilha = novo;

    return true;
}

bool popCarta(PilhaCartas *pilha, struct Carta *elemento)
{
    if (is_emptyCartas(*pilha))
    {
        return false; // Pilha vazia
    }

    struct Pilha *temp = *pilha;
    strcpy(elemento->descricao, temp->info.descricao); // Corrigindo a cópia da string
    elemento->acao = temp->info.acao;
    *pilha = temp->next;

    free(temp);

    return true;
}

void criarCartas(PilhaCartas *pilha)
{
    struct Carta elemento;

    // primeira carta
    strcpy(elemento.descricao, "Acao de caridade. Doe $50 para o banco");
    elemento.acao = 1;
    pushCarta(pilha, elemento);

    // segunda carta
    strcpy(elemento.descricao, "Voce ganhou um concurso de beleza, receba $50");
    elemento.acao = 2;
    pushCarta(pilha, elemento);

    // terceira carta
    strcpy(elemento.descricao, "Seu carro quebrou.Pague $100 reais.");
    elemento.acao = 3;
    pushCarta(pilha, elemento);

    // quarta carta
    strcpy(elemento.descricao, "Seu investimento imobiliario deu certo. Receba $75 de aluguel.");
    elemento.acao = 4;
    pushCarta(pilha, elemento);

    // quinta carta
    strcpy(elemento.descricao, "Voce encontrou dinheiro perdido. Receba $20.");
    elemento.acao = 5;
    pushCarta(pilha, elemento);

    // sexta carta
    strcpy(elemento.descricao, "Esqueceu de pagar os impostos.Pague $200");
    elemento.acao = 6;
    pushCarta(pilha, elemento);

    // setimo carta
    strcpy(elemento.descricao, "Esqueceu de pagar os impostos.Pague $200");
    elemento.acao = 7;
    pushCarta(pilha, elemento);

    // oitava carta
    strcpy(elemento.descricao, "Esqueceu de pagar os impostos.Pague $200");
    elemento.acao = 8;
    pushCarta(pilha, elemento);

    // decima carta
    strcpy(elemento.descricao, "Receba $100 por encontrar um tesouro escondido.");
    elemento.acao = 9;
    pushCarta(pilha, elemento);

    // decima primeira carta
    strcpy(elemento.descricao, "Pague $50 por excesso de velocidade.");
    elemento.acao = 10;
    pushCarta(pilha, elemento);

    // decima segunda carta
    strcpy(elemento.descricao, "Receba $25 de presente de aniversario.");
    elemento.acao = 11;
    pushCarta(pilha, elemento);

    // decima terceira carta
    strcpy(elemento.descricao, "Voce ganhou um torneio de esportes. Receba $75.");
    elemento.acao = 12;
    pushCarta(pilha, elemento);

    // decima quarta carta
    strcpy(elemento.descricao, "Ganhe $50 no cassino.");
    elemento.acao = 13;
    pushCarta(pilha, elemento);

    // decima quinta carta
    strcpy(elemento.descricao, "Pague $50 de taxa de estacionamento.");
    elemento.acao = 14;
    pushCarta(pilha, elemento);

    // decima sexta carta
    strcpy(elemento.descricao, "Va para o inicio. Receba $200.");
    elemento.acao = 15;
    pushCarta(pilha, elemento);

    // decima setima carta
    strcpy(elemento.descricao, "Voce foi promovido no trabalho. Receba $100.");
    elemento.acao = 16;
    pushCarta(pilha, elemento);

    // decima oitava carta
    strcpy(elemento.descricao, "Pague $75 por reparos em casa.");
    elemento.acao = 17;
    pushCarta(pilha, elemento);

    // decima nona carta
    strcpy(elemento.descricao, "Receba $50 de reembolso de imposto.");
    elemento.acao = 18;
    pushCarta(pilha, elemento);

    // vigesima carta
    strcpy(elemento.descricao, "Pague $100 por uma multa de transito.");
    elemento.acao = 19;
    pushCarta(pilha, elemento);

    // vigesima primeira carta
    strcpy(elemento.descricao, "Voce ganhou um premio de loteria. Receba $500.");
    elemento.acao = 20;
    pushCarta(pilha, elemento);

    // vigesima segunda carta
    strcpy(elemento.descricao, "Pague $150 por despesas medicas.");
    elemento.acao = 21;
    pushCarta(pilha, elemento);

    // vigesima terceira carta
    strcpy(elemento.descricao, "Voce fez um investimento ruim. Pague $50.");
    elemento.acao = 22;
    pushCarta(pilha, elemento);

    // vigesima quarta carta
    strcpy(elemento.descricao, "Receba $150 como dividendos de ações.");
    elemento.acao = 23;
    pushCarta(pilha, elemento);

    // vigesima quinta carta
    strcpy(elemento.descricao, "Pague $100 de aluguel para cada propriedade que possui.");
    elemento.acao = 24;
    pushCarta(pilha, elemento);

    // vigesima sexta carta
    strcpy(elemento.descricao, "Voce foi eleito presidente do sindicato. Receba $50 de cada jogador.");
    elemento.acao = 25;
    pushCarta(pilha, elemento);

    // vigesima setima carta
    strcpy(elemento.descricao, "Pague $50 por uma festa surpresa.");
    elemento.acao = 26;
    pushCarta(pilha, elemento);

    // vigesima oitava carta
    strcpy(elemento.descricao, "Receba $60 de renda de aluguel.");
    elemento.acao = 27;
    pushCarta(pilha, elemento);

    // trigésima carta
    strcpy(elemento.descricao, "Pague $75 por despesas escolares.");
    elemento.acao = 28;
    pushCarta(pilha, elemento);

    // trigésima primeira carta
    strcpy(elemento.descricao, "Voce ganhou um premio por boas acoes. Receba $150.");
    elemento.acao = 29;
    pushCarta(pilha, elemento);

    // trigésima segunda carta
    strcpy(elemento.descricao, "Pague $200 por um jantar extravagante.");
    elemento.acao = 30;
    pushCarta(pilha, elemento);
}
