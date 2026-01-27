#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *proximo;
};

int main(void){

    struct No *primeiro = (struct No*) malloc(sizeof(struct No));

    primeiro -> valor = 77;
    primeiro -> proximo = NULL;

    printf("O valor inteiro e: %d\n", primeiro -> valor);
    printf("O proximo ponteiro e: %p\n", (void*)primeiro->proximo);

    free(primeiro);
    return 0;
}