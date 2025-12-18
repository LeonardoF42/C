#include <stdio.h>

int main(void){

    char inicial_nome;
    int idade;
    float altura;
    double salario;

    printf("Digite a inicial do seu nome: ");
    scanf("%c",&inicial_nome);
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    printf("Digite o seu salario: ");
    scanf("%lf",&salario); //O scanf de double é %lf


    printf("______RETORNO DO QUE FOI DIGITADO________\n");
    printf("A inicial do seu nome e %c\n",inicial_nome);
    printf("A sua idade e: %d\n",idade);
    printf("A sua altura e: %.2f\n",altura);
    printf("O seu salario e: R$%.2f\n",salario);

    return 0;
}