#include<stdio.h>

int main(void){

    int notas[3][2];

    printf("Insira os valores na matriz\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite a nota do Aluno %d prova %d : ", i+1,j+1);
            scanf("%d", &notas[i][j]);
        }
    }

    printf("\n=== NOTAS FINAIS ===\n");
    for(int i = 0; i < 3; i++){
        printf("As notas do Aluno %d foram: ",i+1);
        for(int j = 0; j < 2; j++){
            printf("%d ", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}