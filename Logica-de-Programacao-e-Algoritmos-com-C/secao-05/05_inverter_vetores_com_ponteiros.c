#include <stdio.h>
#include <stdlib.h>

void inverteVetor(int *vetor, int tamanho){
    int temp;
    for(int i = 0; i < tamanho / 2; i++){
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main(void){

    int tamanho, *vetor;

    printf("Digite quantos elementos serao inserido no vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    if(vetor == NULL){
        printf("ERRO na alocação de memória\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++){
        printf("informe o %d elemento do vetor: ", i+1);
        scanf("%d",&vetor[i]);
    }

    printf("\n=== VETOR ORIGINAL ===\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    inverteVetor(vetor,tamanho);

    printf("\n=== VETOR INVERTIDO ===\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}