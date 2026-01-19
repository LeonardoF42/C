#include <stdio.h> 

int main(void){

    int numero = 77;
    int *n = &numero; // *n é o ponteiro para a variavel numero

    printf("Antes: %d\n",numero);
    *n = 99; //atribuindo um novo valor para a variavel numero pelo seu ponteiro
    printf("Depois: %d\n",numero);

    return 0;
}