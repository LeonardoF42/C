#include <stdio.h>

void imprimiVetor(int v[],int n ){
        for (int i = 0; i < n; i++){
            printf(" %d ", v[i]);
        }
        printf("\n");
}

void bubbleSort(int numeros[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if( numeros[j] > numeros[j+1]){
                int temp = 0;
                temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }
}


int main(void){

    int vetor[10] = {3,0,1,8,7,2,5,4,6,9};

    printf("O vetor original e: ");
    imprimiVetor(vetor,10);

    printf("O vetor ordenado por Bubble Sort e: ");
    bubbleSort(vetor,10);
    imprimiVetor(vetor,10);

    return 0;
}