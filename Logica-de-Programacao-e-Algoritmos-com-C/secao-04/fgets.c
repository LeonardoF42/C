#include <stdio.h>
#include <string.h>

int main(void){
    char nome[50];

    printf("Digite um nome inteiro : ");
    fgets(nome,sizeof(nome),stdin);

    nome[(strcspn(nome,"\n"))] = '\0'; //Remove o \n se ele existir

    printf("Nome é  %s ",nome);

    return 0;
}