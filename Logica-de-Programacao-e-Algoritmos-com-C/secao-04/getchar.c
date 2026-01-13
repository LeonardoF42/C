#include <stdio.h>
#include <string.h>

int main(void){
    int idade;
    char nome[30], sexo;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    getchar(); //consome o '\n' deixado pelo scanf
    printf("Digite o nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome,"\n")] = '\0';
    printf("Digite o sexo (M/F): ");
    scanf("%c",&sexo);
    printf("=== Dados Lidos ===\n");
    printf(" Nome : %s\n", nome);
    printf(" Idade: %d\n", idade);
    printf(" Sexo: %c\n", sexo);


    return 0;
}