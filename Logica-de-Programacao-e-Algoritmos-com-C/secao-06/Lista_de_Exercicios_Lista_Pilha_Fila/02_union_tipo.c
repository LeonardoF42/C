/*
2. Crie uma union chamada Valor que possa armazenar um inteiro, um float ou um char. 
Crie um programa que permita ao usuário escolher qual tipo deseja armazenar e mostre o valor.
*/

#include <stdio.h>

typedef union {
    int i;
    float f;
    char c;
}Valor;

int main(void){
    int escolha = 0;

    Valor valor;
    
    printf("=== Escolha um tipo desejado ===\n1 - Inteiro\n2 - Float\n3 - Char\nInforme sua escolha:");
    scanf("%d",&escolha);

    switch(escolha){
        case 1:
            printf("Inteiro escolhido\nDigite um numero inteiro: ");
            scanf("%d", &valor.i);
            printf("O numero inteiro digitado foi: %d\n", valor.i);

            break;
        
        case 2:
            printf("Inteiro escolhido\nDigite um numero flutuante: ");
            scanf("%f", &valor.f);
            printf("O numero flutuante digitado foi: %.2f\n", valor.f);
            break;
        
        case 3:
            printf("Inteiro escolhido\nDigite um numero char: ");
            scanf(" %c",&valor.c);
            printf("O char digitado foi: %c\n", valor.c);
            break;
        
        default:
            printf("Valor incorreto informado !!!\n");
    }

    return 0;
}