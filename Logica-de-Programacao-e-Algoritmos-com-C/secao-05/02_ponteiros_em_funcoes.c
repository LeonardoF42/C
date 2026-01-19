#include<stdio.h>

    void aumenta(int *n){
        (*n)++;
    }

int main(void){

    int numero = 16;

    aumenta(&numero);

    printf("O valor após a função é: %d\n",numero);

    return 0;
}