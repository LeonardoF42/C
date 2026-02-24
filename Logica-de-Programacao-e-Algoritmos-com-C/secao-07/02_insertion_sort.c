#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}



void insertionSort(int vetor[],int tamanho){
    for(int i = 1; i < tamanho; i++){
        int chave = vetor[i];
        int j = i - 1;

        while(j >= 0 && vetor[j] > chave){
            vetor[j+1] = vetor[j];
            j--;

        }
        vetor[j+1] = chave;
    }
}

int main(void){
    int numeros[] = {1,3,5,7,2,4,8,9,6};
    int tamanho =  sizeof(numeros) / sizeof(numeros[0]);

    printf("O Vetor Original: ");
    imprimirVetor(numeros,tamanho);

    insertionSort(numeros,tamanho);
    printf("O Vetor Ordenado por Insertion Sort: ");
    imprimirVetor(numeros,tamanho);

    return 0;
}