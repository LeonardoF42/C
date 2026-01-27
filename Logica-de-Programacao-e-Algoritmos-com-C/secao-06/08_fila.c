#include <stdio.h>

int fila[10];
int inicio = 0;
int fim = 0;
int tamanho_maximo = 10;

void enqueue(int valor){
    if(fim == tamanho_maximo){
        printf("A fila esta cheia!!!");
        return;
    }

    fila[fim] = valor;
    fim++;
}

void dequeue(){
    if(fim == inicio){
        printf("A fila esta cheia!!!");
        return;
    }

    for(int i = 0; i < fim - 1; i++ ){
        fila[i] = fila[i+1];
    }
    fim--;

}

void imprimirFila(){
    printf("Os elementos da fila sao: ");
    for(int i = 0; i < fim; i++){
        printf("%d ",fila[i]);
    }
    printf("\n");
}


int main(void){

    enqueue(166);
    enqueue(89);
    enqueue(41);
    enqueue(9);

    imprimirFila();

    enqueue(77);
    enqueue(0);

    imprimirFila();
    dequeue();
    imprimirFila();

    return 0;
}