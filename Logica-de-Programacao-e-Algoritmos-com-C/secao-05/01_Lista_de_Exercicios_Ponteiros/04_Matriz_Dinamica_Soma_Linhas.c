/*
Exercício 4: Matriz Dinâmica com Soma de Linhas
Aloque dinamicamente uma matriz m x n, preencha-a e imprima a soma de cada linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int m,n , **matriz;

    printf(" === Matriz: M x N === \n");
    printf("Digite a quantidade de linhas da matriz (m): ");
    scanf("%d",&m);
    printf("Digite a quantidade de colunas da matriz (n): ");
    scanf("%d", &n);

    matriz = (int **) malloc(m * sizeof(int *));

    for(int i = 0; i < m; i++){
        int soma = 0;
        matriz[i] = (int *) malloc(n * sizeof(int));
        for(int j = 0; j < n; j++){
            printf("Digite o numero para a posicao [%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("A soma dos valores da %d linha e : %d \n", i+1, soma);
    }

    for(int i = 0; i < m; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}