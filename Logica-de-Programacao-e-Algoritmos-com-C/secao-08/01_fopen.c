#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arquivo;

    //arquivo = fopen("dados.txt","w"); cria o arquivo
    arquivo = fopen("dados.txt","r"); // abre o arquivo

    system("code dados.txt");

    return 0;
}