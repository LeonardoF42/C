/*
6 - Verificação de Cartão Vermelho
Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo. 
Escreva um programa que verifica se um jogador será expulso, baseado na quantidade de cartões amarelos.
*/

#include <stdio.h>

int main(void){
    int cartoes;

    printf("Digite a quantidade de cartoes amarelo recebida pelo jogador: ");
    scanf("%d",&cartoes);

    if( cartoes <= 1){
        printf("Jogador nao sera expulso pois tem %d cartoes amarelo\n",cartoes);
    }else{
        printf("JOGADOR EXPULSO\n");
    }
    return 0;
}