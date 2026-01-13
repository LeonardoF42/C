/*
4 – Transposta de uma matriz
Dada uma matriz 3x2, imprima a sua transposta (2x3).

*/


#include <stdio.h>

int main(void){

    int matriz[3][2];

    printf("Digite os valores da matriz 3x2 (linha por linha)\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ",i,j );
            scanf("%d",&matriz[i][j]);
            printf("%d",matriz[i][j]);
        }
    }

    printf("Matriz Original: \n");
    for(int i = 0; i < 3; i++){
        printf("| ");
        for(int j = 0; j < 2; j++){
            printf("%3d " , matriz[i][j]);
        }
        printf("|\n");
    }

    printf("\nMatriz tranposta: \n");
    for(int j = 0; j < 2; j++){
        printf("| ");
        for(int i = 0; i < 3; i++){
            printf("%3d ", matriz[i][j]);
        }
        printf("|\n");
    }


    return 0;
}