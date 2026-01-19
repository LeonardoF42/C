#include<stdio.h>
#include<stdlib.h>

int main(void){
    int tamanho;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    if (vetor == NULL){
        printf("Erro no vetor \n");
        return 1;
    }

    printf("=== Vetor Populado == \n");

    for(int i = 0 ; i < tamanho; i++){
        vetor[i] = i * 7;
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d\n",vetor[i]);
    }

    free(vetor);

    return 0;
}