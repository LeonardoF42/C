#include <stdio.h>

int main(void){
    char nome[10];
    int idade,gols;

    printf("Informe o seu primeiro nome: ");
    scanf("%s",&nome);
    printf("Informe a sua idade: ");
    scanf("%d",&idade);
    printf("Informe a quantidade de gols na carreira: ");
    scanf("%d",&gols);

    printf("--- INFORMACA DO JOGADOR(A) ---\n");
    printf("Seu nome: %s\nIdade: %d\nQuantidade de gols feito na carreira: %d\n",nome,idade,gols);

    return 0;
}