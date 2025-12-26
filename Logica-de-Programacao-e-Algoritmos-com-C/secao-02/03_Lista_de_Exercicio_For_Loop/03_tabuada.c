/*

3 – Tabuada
Escreva um programa que recebe um número inteiro do usuário e imprime a tabuada desse número de 0 a 10.

Exemplo de saída se o usuário digitar 5:
5 x 0 = 0​
5 x 1 = 5 
5 x 2 = 10 
5 x 3 = 15 
... 
5 x 10 = 5

*/


#include <stdio.h>

int main(void){

    int numero;

    printf("Digite o numero para a tabuada: ");
    scanf("%d",&numero);

    printf("\nA tabuada de %d e: \n",numero);
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero,i,numero*i);
    };

    return 0;
}