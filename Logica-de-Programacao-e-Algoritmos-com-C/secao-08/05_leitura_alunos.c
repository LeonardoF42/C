#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *arquivo;
    arquivo = fopen("alunos.txt","r");
    char nome[100];
    int idade;

    if(arquivo == NULL){
        printf("Erro ao ler arquivo \n");
        return 1;
    }

    while(fscanf(arquivo,"%s %d",nome, &idade) != EOF){
        printf("Aluna %s tem %d anos\n",nome,idade);
    }

    system("code alunos.txt");

    fclose(arquivo);

    return 0;
}