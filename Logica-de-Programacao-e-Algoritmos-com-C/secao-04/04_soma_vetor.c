#include<stdio.h>

int main(void){

    int valor[3];
    int soma = 0;

    for(int i = 0; i < 3; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d", &valor[i]); // não deixe espaço no dentro do "%d"

        soma += valor[i];
    }

    printf("A soma dos valores foi %d\n",soma);

    return 0;
}