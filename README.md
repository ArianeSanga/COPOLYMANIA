# COPOLYMANIA
Bem-vindo(a) ao repositório do jogo Copolymania, jogo desenvolvido em linguagem C que contém uma lógica semelhante aos famosos jogos de tabuleiro "Monopoly" e "Banco Imobiliário". O projeto foi implementado pelas alunas do IFSP Campus Araraquara.
Nesta documentação você encontrará a descrição do projeto, fotos e explicação do funcionamento do jogo, detalhes a respeito da metodologia, etc.

## SOBRE O JOGO
Copolymania é um jogo simples, mas de estratégia que envolvem dois jogadores com o objetivo central de levar o oponente à falência. 
#### Mas como? 
A dinâmica do jogo é fundamentada em um tabuleiro virtual que simula o avanço de cada jogador por meio do lançamento de dois lados. Cada dado determina o número de casas a serem avançadas, e ao alcançar uma casa, o jogador decide se vale a pena comprar a propriedade ou não, a partir da compra de uma propriedade cada jogador que passar por essa posição é obrigado a pagar um valor (aluguel) ao proprietário. O jogo também conta com posições especiais no tabuleiro, caso o jogador caia em uma posição especial ele precisa retirar uma carta, sendo ela aleatoriamente de sorte ou azar. Sendo assim, busque a melhor estratégia, seu sucesso depende disso!

## IMPLEMENTAÇÃO
Utilizamos duas estruturas de dados como base do projeto, sendo elas: Lista e Pilha
#### Uso da Lista
Utilizamos lista circular duplamente encadeada para fazer o tabuleiro, onde cada nó da lista(tabuleiro) contém informações sobre a propriedade do jogo, lógica semelhante a um tabuleiro real.
#### Uso da Pilha
Para fazer uma pilha de cartas, sendo chamada no jogo em posições específicas. Logo, assim que chama a carta, retira uma carta do topo da pilha.

## ANTIGA IMPLEMENTAÇÃO
#### Fila
Anteriormente o jogo estava utilizando a estrutura de dados Fila para lidar com os jogadores, mas vimos que não tinha motivo e então retiramos
#### Tabuleiro
Além disso, o tabuleiro foi primeiramente implementado com matriz mas também vimos ser inútil por dois motivos, primeiro que um tabuleiro (se for aproximar da realidade) é composto pelas bordas, o interior é "vazio", logo não faria sentido desperdiçar memória. E o segundo motivo é que o tabuleiro não precisa ser exatamente como o da vida real, então a representação com Lista (atual implementação) faz mais sentido já que a representação de um tabuleiro quadrado é lógica.

## SCREENSHOTS
![image](https://github.com/ArianeSanga/COPOLYMANIA/assets/141193456/607c614f-4786-4bb2-8a7c-127aac2bddc0)

![image](https://github.com/ArianeSanga/COPOLYMANIA/assets/141193456/46178801-fca9-4b91-91b3-e46cf7150288)

![image](https://github.com/ArianeSanga/COPOLYMANIA/assets/141193456/1718ec7c-409f-45c5-a246-2435718dd446)

## COMO JOGAR
Nosso jogo, até o momento, não recorre a interfaces, logo, para ter acesso à implementação basta clonar/baixar os arquivos e rodar na IDE da sua preferência. Qualquer dúvida faça contato conosco!

![image](https://github.com/ArianeSanga/COPOLYMANIA/assets/141193456/7d07b9d3-efbe-416e-81cb-466f912846c6)

* Clique em "<> Code"
* E depois clique na opção "Download ZIP"
* Após isso, o arquivo da pasta será baixado, agora é só descompactar e rodar :)

## METODOLOGIA DE DESENVOLVIMENTO
Utilizamos a plataforma Trello para dividir os trabalhos principais a serem feitos, tanto geral quanto individualmente, por meio de cards.

![image](https://github.com/ArianeSanga/COPOLYMANIA/assets/141193456/5093fdfd-5cd9-4283-b5f0-43efd9bd44ac)

## VIDEO EXPLICATIVO SOBRE O JOGO
Segue o vídeo explicativo com mais detalhes sobre o jogo Copolymania com a explicação da lógica do jogo, importância das estruturas de dados utilizadas e muito mais!
* https://youtu.be/aASnSqYyzgQ

## AUTORAS DO PROJETO
*  Ariane Sanga - arianesanga4@icloud.com
*  Ellen Pinheiro - ellenpingon@gmail.com
