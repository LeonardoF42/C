/*
 Criar um padrão de asteriscos
Crie uma função que imprime um quadrado de asteriscos com lado n. 
O usuário dirá qual o valor de n e qual caracter será usado (*, #, $ ...).
*/


#include <stdio.h>

    void imprimirQuadrado(int n, char caracter){
        printf("\nRETORNANDO O QUADRADO\n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%c ", caracter);
            }
        printf("\n");
        }
    }

int main(void){
    int lado;
    char desenho;

    printf("Digite os tamanho do quadrado: ");
    scanf("%d",&lado);
    printf("Digite o desenho do quadrado: ");
    scanf(" %c",&desenho);

    imprimirQuadrado(lado,desenho);


    return 0;
}