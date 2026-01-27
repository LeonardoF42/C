/*
3. Implemente uma lista ligada simples que insere 5 números inteiros no final da lista e imprime todos.​
*/

#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *proximo;
};

int main(void){


    struct No *primeiro = NULL;
    struct No *ultimo = NULL;

    for(int i = 0; i < 5; i++){
        struct No *novo = (struct No*) malloc(sizeof(struct No));

        printf("Digite  %dº valor da fila: ", i+1);
        scanf("%d",&novo->valor);
        novo->proximo = NULL;

        if(primeiro == NULL){
            primeiro = novo;
            ultimo = novo;
        }else{
            ultimo->proximo = novo;
            ultimo = novo;
        }
    }

    printf("Valores da lista: ");

    struct No *temp = primeiro;
    while(temp != NULL){
        printf("%d ", temp->valor);
        temp = temp->proximo;
    }
    printf("\n");

    
    return 0;
}