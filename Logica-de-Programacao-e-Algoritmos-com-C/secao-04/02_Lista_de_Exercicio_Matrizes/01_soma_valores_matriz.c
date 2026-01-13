/*

​1 – Somando elementos de uma matriz
Um banco quer somar todos os valores de uma matriz 2x3 que representa o valor arrecadado por 2 agências em 3 dias.
Imprima o total arrecadado.


*/

#include <stdio.h>

int main(void){

    int valor[2][3], soma = 0;


    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor recebido pela agencia %d, Dia %d: ", i+1,j+1);
            scanf("%d",&valor[i][j]);
            soma += valor[i][j];
        }
    }

    printf("\n === VALORES ARRECADADO === \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Agencia %d, Dia %d : %d\n", i+1,j+1,valor[i][j]);
        }
    }
    printf("\nTotal arrecadado: R$%d\n",soma);

    return 0;
}