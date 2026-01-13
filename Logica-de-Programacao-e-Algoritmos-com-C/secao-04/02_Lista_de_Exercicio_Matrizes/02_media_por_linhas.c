/*
2 – Média por linha
Registre as notas de 3 alunos em 4 provas. Depois, calcule e exiba a média de cada aluno.

*/

#include <stdio.h>

int main(void){
    
    float notas[3][4], media[3];

    for(int i = 0; i < 3; i++){
        float soma = 0;
        for(int j = 0; j < 4; j++){
            printf("Digite a nota do Aluno %d, Prova %d: ",i+1,j+1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / 4;
    }

    printf("\n=== NOTAS ALUNOS ===\n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("Aluno %d, Prova %d: %.2f\n", i+1,j+1,notas[i][j]);
        }
        printf("\nMedia do aluno %d: %.2f\n\n", i+1, media[i]);
    }


    return 0;
}