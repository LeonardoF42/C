/*
Exercício 1: Soma de Dois Números com Ponteiros
Crie uma função soma que recebe dois ponteiros para inteiros e retorna a soma dos valores apontados.
*/
#include <stdio.h>
    
    int somar(int *a, int *b){
        return *a + *b;
    }

int main(void){

    int x,y;

    printf("Digite o primeiro valor: ");
    scanf("%d",&x);
    printf("Digite o segundo valor: ");
    scanf("%d",&y);

    printf("A soma dos valores utilizando ponteiro foi: %d\n",somar(&x,&y));



    return 0;
}