#include <stdio.h>

int main(void){
    int matriz[4][4],soma_diagonal = 0;

    printf("Digite os números da matriz\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o numero para a linha %d coluna %d: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
            if( i == j){
                soma_diagonal += matriz[i][j];
            }
        }
    }

    printf("\n === MATRIZ === \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma da diagonal principal: %d\n",soma_diagonal);

    
    return 0;
}