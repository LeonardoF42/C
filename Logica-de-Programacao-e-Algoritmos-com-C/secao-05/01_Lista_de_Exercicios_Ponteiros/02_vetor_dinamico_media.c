/*
Exercício 2: Vetor Dinâmico com Média
Aloque dinamicamente um vetor de n floats (digitado pelo usuário), preencha-o com valores e calcule a média.

*/

#include <stdio.h>
#include <stdlib.h>

float media(float *vetor, int tamanho){

    float total = 0;
    for(int i  = 0; i < tamanho; i++){
        total += vetor[i];
    }

    return total / tamanho;

}

int main(void){

    int tamanho;
    float *vetor;

    printf("Digite quantos elementos deseja inserir no vetor: ");
    scanf("%d",&tamanho);

    vetor = (float *) malloc(tamanho * sizeof(float));

    if(vetor == NULL){
        printf("ERRO na alocação de memória\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d elemento do vetor: ", i+1);
        scanf("%f",&vetor[i]);
    }

    printf(" --- OS VALORES DO VETOR ---\n ");
    for (int i = 0; i < tamanho; i++){
        printf("%.2f ",vetor[i]);
    }
    printf("\n");
    printf("A media das somas dos valores do vetor e: %.2f\n", media(vetor,tamanho));

    free(vetor);

    return 0;
}