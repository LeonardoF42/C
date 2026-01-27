#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

int main(void){

    Pessoa p1,p2;

    strcpy(p1.nome,"Deborah");
    p1.idade = 27;

    printf("Digite o nome da pessoa 2: " );
    fgets(p2.nome,sizeof(p2.nome),stdin);
    p2.nome[strcspn(p2.nome,"\n")] = '\0';
    printf("Digite a idade da pessoa 2: ");
    scanf("%d",&p2.idade);


    printf("\nPessoas Cadastradas\n");
    printf("O nome da pessoa 1 e %s e ela tem %d anos de idade\n",p1.nome,p1.idade);
    printf("O nome da pessoa 2 e %s e ela tem %d anos de idade\n",p2.nome,p2.idade);





    
    return 0;
}