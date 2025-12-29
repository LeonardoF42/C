#include <stdio.h>

void verificarNumero(int x){
    if(x % 2 == 0){
        printf("O numero e par\n");
    }else{
        printf("O numero e impar\n");
    }
}


int main(void){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    verificarNumero(num);

    return 0;
}