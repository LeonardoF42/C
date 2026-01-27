#include <stdio.h>

typedef union{
    int inteiro;
    char caracter;
} Compartilhamento;

int main(void){
    Compartilhamento u;

    u.inteiro = 65;
    printf("O valor de inteiro e: %d\n",u.inteiro);
    printf("O valor char e: %c\n",u.caracter);
    u.caracter = 'B';
    printf("Apos mudar o char para B o inteiro e: %d\n",u.inteiro);

    return 0;
}