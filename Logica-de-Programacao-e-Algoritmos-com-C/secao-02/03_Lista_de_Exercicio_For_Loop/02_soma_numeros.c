/*
    2 – Soma dos Números de 1 a n
    O usuário digita um número n, e o programa calcula a soma de todos os números de 1 até n.
    Saída esperada (se o usuário digitar 5):
    A soma de 1 ate 5 e: 15
    (Cálculo: 1 + 2 + 3 + 4 + 5 = 15)
*/

#include<stdio.h>

int main(void){

    int n,soma = 0;

    printf("Digite um numero para a soma: ");
    scanf("%d",&n);
    printf("A soma de 1 ate %d e: ",n);

    for(int i = 1; i <= n;i++){
        soma = soma + i;
    };
    printf("%d\n",soma);

    return 0;
}