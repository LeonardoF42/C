/*
1. Crie uma estrutura chamada pessoa com os campos: nome, idade e altura.
Leia os dados de 3 pessoas e imprima os dados da mais velha.

*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    float altura;
} Pessoa;


int main(void){

    Pessoa pessoas[3];
    int maisvelha = 0;

    printf("=== Cadastro de Pessoas ===\n");

    for(int i = 0; i < 3; i++){
        printf("Pessoa %d\n", i+1);
        printf("Digite o nome da pessoa: ");
        fgets(pessoas[i].nome,sizeof(pessoas[i].nome),stdin);
        pessoas[i].nome[(strcspn(pessoas[i].nome,"\n"))] = '\0';
        printf("Digite a idade da pessoa: ");
        scanf("%d",&pessoas[i].idade);
        printf("Digite a altura da pessoa: ");
        scanf("%f",&pessoas[i].altura);
        printf("\n");

        if(maisvelha < pessoas[i].idade){
            maisvelha = pessoas[i].idade;
        }

        getchar();
    }

    for(int i = 0; i < 3; i++){
        if(maisvelha == pessoas[i].idade){
            printf("A pessoa mais velha e %s tem %d anos e tem %.2f de altura\n",pessoas[i].nome,pessoas[i].idade,pessoas[i].altura);
        }
    }


    return 0;
}