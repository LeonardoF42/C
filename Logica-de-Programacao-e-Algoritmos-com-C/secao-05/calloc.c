#include <stdio.h>
#include<stdlib.h>

int main(void){

    int tamanho, *vetor;

    printf("Quantos elementos seseja no vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) calloc(tamanho,sizeof(int));

    if (vetor == NULL){
        printf("Erro de alocação da memória");
        return 1;
    }

    //Exibindo vetor com os valores zerados pelo calloc
    printf(" === VETOR INICIAL Calloc === \n");
    for(int i = 0; i < tamanho; i++){
        printf("%d ",vetor[i]);
    }

    // Colocando valores no vetor
    for(int i  = 0; i < tamanho; i++){
        vetor[i] = i * 17;
    }

    printf(" \n=== VETOR POPULADO === \n");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    vetor = NULL;


    return 0;
}