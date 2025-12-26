/*
4 – Números Pares de 1 a n
O usuário digita um número n, e o programa imprime todos os números pares de 1 até n.
Saída esperada (se o usuário digitar 10):
Numeros pares de 1 ate 10:
2 4 6 8 10
*/
#include <stdio.h>

int main(void){

    int numero;
    printf("Digite um numero inteiro:");
    scanf("%d",&numero);

    printf("Os numero pared de 1 ate %d:\n",numero);

    for(int i = 1; i <= numero; i++){
        if( i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}