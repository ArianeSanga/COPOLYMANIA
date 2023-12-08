# COPOLYMANIA
Bem vindo ao repositório do jogo Copolymania, jogo desevolvido em linguagem C que contém uma lógica semelhante aos famosos jogos de tabuleiro "Monopoly" e "Banco Imobiliário". O projeto foi implementado pelas alunas do IFSP Campus Araraquara.
Nesta documentação você encontrará a descrição do projeto, fotos e explicação do funcionamento do jogo, detalhes a respeito da metodologia e etc.

## SOBRE O JOGO
Copolymania é um jogo simples mas de estretégia que envolvem dois jogadores com o objetivo central de levar o oponente à falência. 
#### Mas como? 
A dinãminca do jogo é fundamentada em um tabuleiro virtual que simula o avaço de cada jogador por meio do lançamento de dois lados. Cada dado determina o número de casas a serem avançadas, e ao alcançar uma casa, o jogador decide se vale a pena comprar a propriedade ou não, a partir da compra de uma propriedade cada jogador que passar por essa posição é obrigado a pagar um valor(aluguél) ao proprietário. O jogo também conta com posições especiais no tabuleiro, caso o jogador caia em uma posição especial ele precisa retirar uma carta, sendo ela aleatóriamente de sorte ou azar. Sendo assim, busque a melhor estratégia, seu sucesso depende disso!

## IMPLEMENTAÇÃO
Utilizamos duas estruturas de dados como base do projeto, sendo elas: Lista e Pilha
#### Uso da Lista
Utilizamos lista cirular duplamente encadeada para fazer o tabuleiro, onde cada nó da lista(tabuleiro) contém informaões sobre a propriedade do jogo, lógica semelhante a um tabuleiro real.
#### Uso da pilha
Para fazer uma pilha de cartas, que é chamada no jogo em posições específicas. Logo, assim que chama a carta, retira uma carta do topo da pilha.

## COMO JOGAR
Nosso jogo, até o momento, não faz uso de interfaces, logo, para ter acesso à implementação basta clonar/baixar os arquivos e rodar na IDE da sua preferência. Qualque dúvida faça contato conosco :)

## AUTORAS DO PROJETO
*  Ariane Sanga - arianesanga4@icloud.com
*  Ellen Pinheiro - ellenpingon@gmail.com
