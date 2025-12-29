/*
4. Classificar notas de alunos
Crie uma função que receba a nota de um aluno e imprima:
Aprovado (nota >= 6)
Recuperação (nota >= 4 e < 6)
Reprovado (nota < 4)

*/

#include <stdio.h>

void classificarNota(float x){
    if(x >= 6){
        printf("Aprovado\n");
    }else if(x >= 4 && x < 6){
        printf("Recuperacao\n");
    }else if(x < 4){
        printf("Reprovado\n");
    }
}

int main(void){

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    classificarNota(nota);

    return 0;
}