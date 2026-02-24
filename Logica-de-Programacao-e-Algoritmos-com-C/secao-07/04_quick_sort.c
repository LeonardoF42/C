#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int particionar(int vetor[], int inicio, int fim){
    int meio = inicio + (fim - inicio) / 2;

    int temp = vetor[meio];
    vetor[meio] = vetor[fim];
    vetor[fim] = temp;

    int pivo  = vetor[fim];
    int i = inicio - 1;

    for(int j = inicio; j < fim; j++){
        if(vetor[j] < pivo){
            i++;

            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }

    temp = vetor[i+ 1 ];
    vetor[i + 1 ] = vetor[fim];
    vetor[fim] = temp;

    return i + 1;
}

void quickSort(int vetor[], int inicio, int fim){
    if(inicio < fim){
        int indicePivo = particionar(vetor,inicio,fim);
        quickSort(vetor,inicio,indicePivo -1);
        quickSort(vetor,indicePivo +1, fim);
    }
}

int main(void){

    int numeros[] = {3,7,4,9,8,6,5,2,1}; 
    int tamanho =  sizeof(numeros) / sizeof(numeros[0]);

    printf("O Vetor Original: ");
    imprimirVetor(numeros,tamanho);

    quickSort(numeros,0,tamanho - 1);
    printf("O Vetor Ordenado por Quick Sort: ");
    imprimirVetor(numeros,tamanho);

    return 0;
}