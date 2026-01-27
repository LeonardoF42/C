#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *proximo;
};

int main(void){

    struct No *primeiro = (struct No*) malloc(sizeof(struct No));

    primeiro -> valor = 77;
    
    struct No *segundo = (struct No*) malloc(sizeof(struct No));

    segundo -> valor = 377;
    primeiro ->proximo = segundo;

    printf("O valor inteiro e: %d\n", primeiro -> valor);
    printf("O proximo ponteiro e: %p\n", primeiro->proximo);
    printf("O valor do segundo e : %d\n",primeiro->proximo->valor);

    free(primeiro);
    free(segundo);

    return 0;
}