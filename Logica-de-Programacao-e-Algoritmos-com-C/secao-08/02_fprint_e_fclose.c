#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *arquivo;

    arquivo = fopen("nomes.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar ou abrir o arquivo ! \n");
        return 1;
    }

    fprintf(arquivo,"Anna \n");
    fprintf(arquivo,"Bianca \n");
    fprintf(arquivo,"Cristina \n");
    fprintf(arquivo,"Deborah \n");

    fclose(arquivo);

    return 0;
}

/*
    Modo  || O que faz
     "r"  || Abre para **leitura** (erro se arquivo não existir)
     "w"  || Abre para **escrita** (cria o arquivo ou apaga o conteúdo anterior)
     "a"  || Abre para **acrescentar** (escreve no final, sem apagar o conteúdo)
     "r+" || Leitura e escrita (arquivo deve existir)
     "w+" || Escrita e leitura (apaga o conteúdo se o arquivo ja existir)
     "a+" || Leitura e acrescentar (mantém conteúdo, adiciona ao final)

*/