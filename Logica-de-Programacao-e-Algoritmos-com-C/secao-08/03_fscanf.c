#include <stdio.h>

int main(void){

    FILE *arquivo;    
    arquivo = fopen("nomes.txt","r");

    char nome[100];

    if(arquivo == NULL){
        printf("Erro ao ler o arquivo! \n");
        return 1;
    }

    while(fscanf(arquivo,"%s",nome) != EOF){
        printf("Nome: %s\n", nome);
    }

    fclose(arquivo);

    return 0;
}