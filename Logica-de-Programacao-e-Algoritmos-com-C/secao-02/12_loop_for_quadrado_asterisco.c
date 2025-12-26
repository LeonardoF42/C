#include <stdio.h>

int main(void){

    int tamanho;

    printf("Digite a quantidade de asterisco do quadrado: ");
    scanf("%d",&tamanho);

    for(int i = 0; i < tamanho; i++){ // * da LINHA
        for(int j = 0; j < tamanho; j++){ // * DA COLUNA 
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}