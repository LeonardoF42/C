/*
​1. Fézinha da mega
Crie um programa em C que simule a geração de 6 números aleatórios entre 1 e 60, como em um jogo de loteria (ex: Mega Sena).
Os números devem ser exibidos na tela. 
Não é necessário garantir que os números sejam diferentes entre si neste primeiro momento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteio(){
    srand(time(NULL));
    for(int i = 0; i <= 6; i++){
        int numsorteado = rand() % 60 + 1;
        printf("%d ",numsorteado);
    }
    printf("\n");
}


int main(void){

    printf("OS Numeros Sorteados foram: ");
    sorteio();

    return 0;
}