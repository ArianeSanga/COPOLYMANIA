#include <stdio.h>
#include "jogador.h"


int sortear() {
  return rand() % 6 + 1;
}

int lancaDados() {
  

  int dado1 = sortear();
  int dado2 = sortear();
  int soma = dado1 + dado2;

  
  imprime_Dado(dado1);
  imprime_Dado(dado2);

  printf("Ande %d casas!",soma);


  return soma;
}

void imprime_Dado(int dado1){
   if(dado1 == 1){
    printf(" ---------\n");
    printf("|         |\n");
    printf("|    0    |\n");
    printf("|         |\n");
    printf(" ---------\n");
  }else if(dado1 == 2){
    printf(" ---------\n");
    printf("|        0|\n");
    printf("|         |\n");
    printf("|0        |\n");
    printf(" ---------\n");
  }else if(dado1 == 3){
    printf(" ---------\n");
    printf("|        0|\n");
    printf("|    0    |\n");
    printf("|0        |\n");
    printf(" ---------\n");
  }else if(dado1 == 4){
    printf(" ---------\n");
    printf("|0       0|\n");
    printf("|         |\n");
    printf("|0       0|\n");
    printf(" ---------\n");
  }else if(dado1 == 5){
    printf(" ---------\n");
    printf("|0       0|\n");
    printf("|    0    |\n");
    printf("|0       0|\n");
    printf(" ---------\n");
  }else if(dado1==6){
    printf(" ---------\n");
    printf("|0       0|\n");
    printf("|0       0|\n");
    printf("|0       0|\n");
    printf(" ---------\n");
  }else{
    printf("ERRO");
  }
}
