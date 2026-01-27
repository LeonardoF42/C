#include <stdio.h>
#include <string.h>

typedef struct{
    char rua[50];
    int numero;
} Endereco;

typedef struct{
    char nome[50];
    int idade;
    Endereco end;
} Pessoa;

int main(void){

    Pessoa p1;

    strcpy(p1.nome,"Felicia Ferdinandez");
    p1.idade = 27;
    strcpy(p1.end.rua,"Avenida A");
    p1.end.numero = 22;

    printf("%s tem %d anos e mora na rua %s numero %d\n",p1.nome,p1.idade,p1.end.rua,p1.end.numero);

    return 0;
}