#include <stdio.h>

int tamanho_maximo = 10;
int pilha[10];
int topo = -1;

void push(int valor){
    if(topo == tamanho_maximo -1){
        printf("Erro pilha cheia !!!\n");
        return;
    }

    topo++;
    pilha[topo] = valor;
}

void top(){
    if( topo == -1){
        printf("A pilha esta vazia\n");
        return;
    }

    printf("O topo da pilha e: ");
    printf("%d\n",pilha[topo]);
}

void pop(){
    if( topo == -1){
        printf("A pilha esta vazia\n");
        return;
    }
    topo--;
}

void imprimirPilha(){
    if(topo == -1){
        printf("A pilha esta vazia\n");
        return;
    }

    printf("Os elementos da pilha sao: \n");
    for(int i = topo; i >= 0; i-- ){
        printf("%d\n",pilha[i]);
    }
}

int main(void){

    push(77);
    push(42);
    push(20);

    imprimirPilha();

    top();
    pop();
    imprimirPilha();
    top();
    push(50);
    push(432);
    push(90);
    imprimirPilha();
    top();


    return 0;
}