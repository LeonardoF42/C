
/*
<string.h > - Manipulação de strings

Principais funções: 

strlen() - tamanho da string
strcpy() - copia uma string
strcmp() - compara string
strcat() - concatena strings


*/
#include <stdio.h>
#include <string.h>

int main(void){
    char nome[] = "Anna";
    char sobrenome[] = " Alvez";

    strcat(nome,sobrenome);
    printf("Ola %s !\n",nome) ;

    printf("O %s possui %d caracteres\n",nome, strlen(nome));

    if(strcmp(nome,"Anna Alves") == 0){
        printf("Nome correto\n");
    } else {
        printf("Nome incorreto\n");
    }
    return 0;
}