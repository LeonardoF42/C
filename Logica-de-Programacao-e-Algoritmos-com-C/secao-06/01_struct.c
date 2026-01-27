#include <stdio.h>
#include<string.h>

struct Pessoa{
    char nome[75];
    int idade;
    float altura;
};

int main(void){

    struct Pessoa p1;

    printf("Digite o nome: ");
    fgets(p1.nome,sizeof(p1.nome),stdin);
    p1.nome[(strcspn(p1.nome,"\n"))] = '\0';
    printf("Digite a sua idade: ");
    scanf("%d",&p1.idade);
    printf("Digite sua altura: ");
    scanf("%f",&p1.altura);

    printf("\n=== CADASTRO REALIZADO ===\n");
    printf("Nome : %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n",p1.altura);


    return 0;
}