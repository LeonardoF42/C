/*
5 – Verificação de matriz identidade

Uma matriz identidade é uma matriz quadrada onde os elementos da diagonal principal são 1 e os demais são 0.
Escreva um programa que leia uma matriz 4x4, diga se ela é uma matriz identidade e exiba a matriz formatada.

*/



#include <stdio.h>

int main(void){

    int matriz[4][4], identidade = 1;

    printf("Digite a matriz: \n");
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
            if((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0 )){
                identidade = 0;
            }
        }
    }

    printf("\nMatriz identidade ? ");
    if(identidade == 1){
        printf(" SIM\n");
    } else{
        printf(" NÃO\n");
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}