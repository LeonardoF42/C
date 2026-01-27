#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *proximo;
};

int main(void){
    int tamanhoLista;
    
    printf("Digite quantidade da Lista: ");
    scanf("%d",&tamanhoLista);

    if(tamanhoLista <= 0 ){
        printf("Valor Invalido !!!\n");
        return 1;
    }

    struct No *primeiro = NULL;
    struct No *ultimo = NULL;

    for(int i = 0; i < tamanhoLista; i++){
        struct No *novo = (struct No*) malloc(sizeof(struct No));

        printf("Digite o valor do NO %d: ", i);
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