#include <stdio.h>

int main(void){

    int numero = 10;
    float numeroQuebrado = 50.49;
    char letra = 'A';
    char nome[5] = "Anna";

    printf("Numero: %d\n", numero);
    printf("Flutuante : %.2f\n", numeroQuebrado);
    printf("Letra : %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}