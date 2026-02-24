#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void selectionSort( int vetor[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        int indiceMenor = i;

        for(int j = i +1; j < tamanho; j++){
            if(vetor[j] < vetor[indiceMenor]){
                indiceMenor = j;
            }
        }

        int temp = vetor[i];
        vetor[i] = vetor[indiceMenor];
        vetor[indiceMenor] = temp;
    }
}

int main(void){

    int numeros[] = {6,9,8,4,2,7,5,3,1}; //{6,3,5,7,2,4,8,9,1}
    int tamanho =  sizeof(numeros) / sizeof(numeros[0]);

    printf("O Vetor Original: ");
    imprimirVetor(numeros,tamanho);

    selectionSort(numeros,tamanho);
    printf("O Vetor Ordenado por Selection Sort: ");
    imprimirVetor(numeros,tamanho);

    return 0;
}