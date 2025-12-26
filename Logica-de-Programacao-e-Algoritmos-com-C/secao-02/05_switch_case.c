#include <stdio.h>

int main(void){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    switch(num){
        case 1: 
            printf("Digitou o numero 1\n");
            break;
        case 2:
            printf("Digitou o numero 2\n");
            break;
        case 3:
            printf("Digitou o numero 3\n");
            break;
        case 4:
            printf("Digite o numero 4\n");
            break;
        case 5:
            printf("Digitou o numero 5\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}