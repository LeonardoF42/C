#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    float altura;
    int idade;
};

int main(void){

    struct Pessoa p1;
    struct Pessoa p2 = {"Bianca",1.77,28};
    struct Pessoa p3 = {
        .nome = "Cristina",
        .altura = 1.82,
        .idade = 33
    };

    strcpy(p1.nome,"Anna");
    p1.altura = 1.73;
    p1.idade = 17;

    printf("\n=== PESEEOAS CADASTRADAS ===\n");
    printf(" -- Nome: %s\n    Idade: %d\n    Altura: %.2f\n",p1.nome,p1.idade,p1.altura);
    printf(" -- Nome: %s\n    Idade: %d\n    Altura: %.2f\n",p2.nome,p2.idade,p2.altura);
    printf(" -- Nome: %s\n    Idade: %d\n    Altura: %.2f\n",p3.nome,p3.idade,p3.altura);


    return 0;
}