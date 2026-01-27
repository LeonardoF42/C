#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[75];
    int idade;
    float altura;
};

int main(void){

    struct Pessoa p1;
    struct Pessoa *ponteiro = &p1;

    printf("Digite o nome: ");
    fgets(ponteiro->nome,sizeof(ponteiro->nome),stdin);
    ponteiro->nome[(strcspn(ponteiro->nome,"\n"))] = '\0';
    printf("Digite a sua idade: ");
    scanf("%d",&ponteiro->idade);
    printf("Digite sua altura: ");
    scanf("%f",&ponteiro->altura);

    printf("\n=== CADASTRO REALIZADO ===\n");
    printf("Nome : %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n",p1.altura);


    return 0;
}