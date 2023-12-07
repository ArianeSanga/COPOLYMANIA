#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tabuleiro.h"
#include "cartas.h"
#include "jogador.h"

void ComprarAlugar(Tabuleiro* tab, struct jogador* comprador, struct jogador* outroJogador, struct Propriedade* propriedade, int symbol) {
    int escolha;

    if (strcmp(propriedade->dono, " ") == 0) {
        printf("\nDeseja comprar a propriedade %s? (1) Sim  (2) Não\n", propriedade->nome);
        printf("%s\n",propriedade->descricao);
        printf("Valor: %d\n",propriedade->preco);
    
        scanf("%d", &escolha);

        if (escolha == 1) {
            if(comprador->dinheiro >= propriedade->preco) {
                comprador->dinheiro -= propriedade->preco;
                printf("\nVoce comprou a propriedade\nSaldo: %d\n", comprador->dinheiro);
                alterarPropriedade(tab, comprador->posicao, comprador->nome, symbol);
            }
            else {
                printf("\nVoce nao possui dinheiro suficiente\nSeu saldo: %d\n", comprador->dinheiro);
                alterarPropriedade(tab, comprador->posicao, " ", symbol);
            }
        }
        else {
            alterarPropriedade(tab, comprador->posicao, " ", symbol);
        }
    } 
    else {
        alterarPropriedade(tab, comprador->posicao, outroJogador->nome, symbol);
        comprador->dinheiro -= propriedade->aluguel;
        outroJogador->dinheiro += propriedade->aluguel;
        printf("\nVoce esta na propriedade de %s\nValor do aluguel: %d\nSeu saldo: %d\n", outroJogador->nome, propriedade->aluguel, comprador->dinheiro);
    }
}


void pegaCarta(struct jogador* jogador, PilhaCartas* cartas) {
    struct Carta elemento;

    if (popCarta(cartas, &elemento)) {
        printf("|VOCE CAIU EM UMA POSICAO ESPECIAL, PEGUE UMA CARTA NO BARALHO|");
        printf("\n%s\n", elemento.descricao);
        switch (elemento.acao)
        {
        case 1:
            jogador->dinheiro -= 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 2:
            jogador->dinheiro += 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 3:
            jogador->dinheiro -= 100;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 4:
            jogador->dinheiro += 75;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 5:
            jogador->dinheiro += 20;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 6:
            jogador->dinheiro -= 200;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 7:
            jogador->dinheiro -= 200;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 8:
            jogador->dinheiro -= 200;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 9:
            jogador->dinheiro += 100;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 10:
            jogador->dinheiro -= 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 11:
            jogador->dinheiro += 25;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 12:
            jogador->dinheiro += 75;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 13:
            jogador->dinheiro += 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 14:
            jogador->dinheiro -= 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 15:
            jogador->posicao = 0;
            jogador->dinheiro += 200;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 16:
            jogador->dinheiro += 100;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 17:
            jogador->dinheiro -= 75;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 18:
            jogador->dinheiro += 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 19:
            jogador->dinheiro -= 100;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 20:
            jogador->dinheiro += 500;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 21:
            jogador->dinheiro -= 150;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        case 22:
            jogador->dinheiro -= 50;
            printf("\nSeu saldo: %d\n", jogador->dinheiro);
            break;
        default:
            break;
        }
    }
}

int verificaCartas(struct jogador* jogador, PilhaCartas* cartas) {
    switch (jogador->posicao) {
    case 3:
        pegaCarta(jogador, cartas);
        return 1;
    case 7:
        pegaCarta(jogador, cartas);
        return 1;
    case 14:
        pegaCarta(jogador, cartas);
        return 1;
    case 18:
        pegaCarta(jogador, cartas);
        return 1;
    case 25:
        pegaCarta(jogador, cartas);
        return 1;
    case 29:
        pegaCarta(jogador, cartas);
        return 1;
    case 36:
        pegaCarta(jogador, cartas);
        return 1;
    default:
        return 0;
    }
    return 0;
}

int main()
{

    Tabuleiro* tabuleiro;
    inicializarTabuleiro(&tabuleiro);

    struct Propriedade propriedades[] = {
        {2, "Beco dos Artistas", "Um pitoresco beco repleto de galerias de arte e teatros. Invista na cultura e torne-se o mecenas da cidade.", " ", 200, 40},
        {3, " ", " ", " ", 0, 0},
        {4, "Rua Ednilson Rossi", "Uma rua dedicada a inovacao e tecnologia. Compre propriedades e esteja na vanguarda do progresso.", " ", 350, 70},
        {5, "Rua dos Sabores", "Uma deliciosa rua gastronomica, conhecida pelos melhores restaurantes da cidade. Invista e conquiste o paladar dos clientes.", " ", 150, 30},
        {6, "Baixada das Pulgas", "Uma deliciosa rua gastronomica, conhecida pelos melhores restaurantes da cidade. Invista e conquiste o paladar dos clientes.", " ", 150, 30},
        {7, " ", " ", " ", 0, 0},
        {8, "Rua dos Gatos", "Uma deliciosa rua gastronomica, conhecida pelos melhores restaurantes da cidade. Invista e conquiste o paladar dos clientes.", " ", 150, 30},
        {9, "Avenida dos Jardins", "Uma avenida arborizada com belos jardins e mansoes elegantes. Adquira propriedades e entre para a alta sociedade.", " ", 300, 60},
        {10, "Praca da Historia", "Uma charmosa praca com museus e monumentos historicos. Invista no patrimonio cultural da cidade.", " ", 180, 36},
        {11, "Avenida da Ciencia", "Uma avenida onde se destacam laboratorios e centros de pesquisa. Invista na ciencia e inovacao para colher os frutos.", " ", 400, 80},
        {12, "Trilha dos Aventureiros", "Uma trilha que leva a destinos emocionantes e exoticos. Explore e adquira propriedades para liderar expedicoes.", " ", 220, 44},
        {13, "Boulevard da Moda", "Um elegante boulevard com lojas de grife e butiques. Entre para o mundo da moda e faca sua marca.", " ", 320, 64},
        {14, "N", " ", " ", 0, 0},
        {15, "Avenida do Esporte", "Uma avenida dedicada ao esporte e ao entretenimento. Construa instalacoes esportivas e torne-se o ponto de referencia da diversao.", " ", 280, 56},
        {16, "Travessa da Sustentabilidade", "Uma rua eco-friendly com praticas sustentaveis. Invista em propriedades verdes e promova um futuro mais sustentavel.", " ", 200, 40},
        {17, "Praca da Noite", "Uma animada praca com bares, clubes noturnos e teatros. Faca parte da vida noturna da cidade.", " ", 260, 52},
        {18, "N", " ", " ", 0, 0},
        {19, "Avenida dos Arranha-Ceus", "Uma majestosa avenida com arranha-ceus imponentes. Construa seu imperio vertical nesta area urbana.", " ", 500, 100},
        {20, "Calcadao do Lazer", "Um calcadao a beira-mar com parques, ciclovias e entretenimento ao ar livre. Adquira propriedades e seja o ponto de encontro para diversao.", " ", 180, 36},
        {21, "Alameda da Tecnologia", "Uma alameda repleta de empresas de tecnologia e startups. Invista na proxima revolucao digital.", " ", 280, 56},
        {22, "Rua da Tranquilidade", "Uma rua serena com parques e espacos verdes. Desenvolva propriedades e ofereca um refugio da agitacao urbana.", " ", 150, 30},
        {23, "Avenida das Estacoes", "Uma avenida que celebra as quatro estacoes do ano. Invista e crie um ambiente versatil para todos os momentos.", " ", 150, 30},
        {24, "Travessa da Alegria", "Uma rua dedicada a diversao e entretenimento. Adquira propriedades e faca da alegria o seu negocio.", " ", 220, 44},
        {25, " ", " ", " ", 0, 0},
        {26, "Rua da Imaginacao", "Uma rua que inspira a criatividade e a imaginacao. Desenvolva propriedades e de vida aos sonhos.", " ", 180, 36},
        {27, "Avenida Ariane Sanga", "Uma avenida cheia de eventos e atividades. Invista e promova acao e diversao.", " ", 500, 100},
        {28, "Bulevar da Musica", "Um bulevar com casas de shows e estudios de musica. Faca sua marca na industria musical.", " ", 350, 70},
        {29, " ", " ", " ", 0, 0},
        {30, "Travessa da Aventura", "Uma travessa que leva a destinos inexplorados e desafios emocionantes. Aventure-se e conquiste terras desconhecidas.", " ", 180, 36},
        {31, "Avenida da Exploracao", "Uma avenida para descobrir novos horizontes e recursos. Explore e capitalize as riquezas.", " ", 200, 40},
        {32, "Rua da Inovacao", "Uma rua onde a inovacao e a chave do sucesso. Desenvolva propriedades e lidere o caminho da inovacao.", " ", 320, 64},
        {33, "Vila Tompeira", "Uma avenida moderna e conectada. Invista em tecnologia e esteja na vanguarda da revolucao digital.", " ", 450, 90},
        {34, "Rua dos Ratos Alados", "Uma avenida moderna e conectada. Invista em tecnologia e esteja na vanguarda da revolucao digital.", " ", 450, 90},
        {36, "Avenida Bentivi", "Uma avenida moderna e conectada. Invista em tecnologia e esteja na vanguarda da revolucao digital.", " ", 450, 90},
        {36, " ", " ", " ", 0, 0},
        {36, "Avenida Ellen Pinheiro", "Uma avenida moderna e conectada. Invista em tecnologia e esteja na vanguarda da revolucao digital.", " ", 450, 90},
        {37,"Rua do Futuro", "Uma rua onde o amanha comeca hoje. Desenvolva propriedades e esteja preparado para o futuro.", " ", 200, 40},
        {38,"Bulevar da Visao", "Um bulevar com uma visao clara para o sucesso. Invista e alcance novos patamares.", " ",  180, 36},
        {39,"Alameda da Prosperidade", "Uma alameda onde a prosperidade floresce. Desenvolva propriedades e cultive o sucesso.", " ", 280, 56} };

    for (int i = 0; i < sizeof(propriedades) / sizeof(propriedades[0]); i++) {
        adicionarAoFinal(tabuleiro, propriedades[i]);
    }

    

    srand(time(NULL));

    PilhaCartas* Cartas;
    initCartas(&Cartas);
    criarCartas(&Cartas);


    struct jogador jogador1, jogador2;

    printf("Qual o nome do jogador 1:\n");
    scanf("%s", jogador1.nome);
    printf("Voce eh o jogador 0\n\n");

    printf("Qual o nome do jogador 2:\n");
    scanf("%s", jogador2.nome);
    printf("Voce eh o jogador -1\n\n");


    jogador1.posicao = 0;
    jogador2.posicao = 0;

    jogador1.dinheiro = 1500;
    jogador2.dinheiro = 1500;

    do
    {
        printf("\n%s sua vez de jogar, lance seus dados e boa sorte.\n", jogador1.nome);
        jogador1.posicao += lancaDados();

        if (jogador1.posicao >= 39) {
            jogador1.posicao = jogador1.posicao - 38;
        }

        printf("\nPOSICAO ATUAL: %d\n", jogador1.posicao);
    
        struct Propriedade propriedadeJog1 = buscarPorPosicao(tabuleiro, jogador1.posicao);

        if(verificaCartas(&jogador1, &Cartas) == 0) {
            ComprarAlugar(tabuleiro, &jogador1, &jogador2, &propriedadeJog1, 0);
        }
        else {
            alterarPropriedade(tabuleiro, jogador1.posicao, " ", 0);
        }

        if (jogador1.dinheiro <= 0) {
            printf("\n%s perdeu! %s venceu!!!\n", jogador1.nome, jogador2.nome);
            break; // Exit the loop
        }

        printf("\n%s sua vez de jogar. Lance seu dado e boa sorte.\n", jogador2.nome);
        jogador2.posicao += lancaDados();

        if (jogador2.posicao == jogador1.posicao) {
            jogador2.posicao = 0;
        }

        if (jogador2.posicao >= 39) {
            jogador2.posicao = jogador2.posicao - 38;;
        }

        printf("\nPOSICAO ATUAL: %d\n", jogador2.posicao);

        struct Propriedade propriedadeJog2 = buscarPorPosicao(tabuleiro, jogador2.posicao);

        if(verificaCartas(&jogador2, &Cartas) == 0) {
            ComprarAlugar(tabuleiro, &jogador2, &jogador1, &propriedadeJog2, -1);
        }
        else {
            alterarPropriedade(tabuleiro, jogador2.posicao, " ", -1);
        }

        if (jogador2.dinheiro <= 0) {
            printf("\n%s perdeu! %s venceu!!!\n", jogador2.nome, jogador1.nome);
            break; // Exit the loop
        }

        imprimirTabuleiro(tabuleiro);

        // reorganizando o tabuleiro
        atualizaTabuleiro(tabuleiro);

    } while (jogador1.dinheiro > 0 && jogador2.dinheiro > 0);


    return 0;
}
