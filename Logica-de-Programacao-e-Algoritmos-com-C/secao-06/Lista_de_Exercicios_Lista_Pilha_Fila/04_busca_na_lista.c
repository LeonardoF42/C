
/*
4. A partir do exercício anterior, adicione uma função que busca um número na lista e retorna se foi encontrado ou não.​
*/

#include <stdio.h>
#include <stdlib.h>


struct No{
    int valor;
    struct No *proximo;
};

int busca(struct No *tempbusca,int valorBuscado){

    while(tempbusca != NULL){
        if(tempbusca->valor == valorBuscado){
            return 1;
        }
        tempbusca = tempbusca->proximo;
    }
    return 0;
}



int main(void){


    struct No *primeiro = NULL;
    struct No *ultimo = NULL;
    int num;

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

    printf("=== Busca de numero na Lista ===\n");
    printf("Digite o numero que deseja buscar: ");
    scanf("%d",&num);

    if(busca(primeiro,num)){
        printf("Valor Encontrado\n");
    }else{
        printf("Valor Nao Encontrado\n");
    }


    
    return 0;
}