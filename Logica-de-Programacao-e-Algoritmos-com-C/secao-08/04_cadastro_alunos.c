#include <stdio.h>

int main(void){

    FILE *arquivo;
    arquivo = fopen("alunos.txt","w");

    char nome[100];
    int idade;

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    for(int i = 0; i < 3; i ++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome);
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);

        fprintf(arquivo,"%s %d\n",nome,idade);
    }

    fclose(arquivo);

    printf("Dados dos alunos salvos com sucesso !\n");

    return 0;
}