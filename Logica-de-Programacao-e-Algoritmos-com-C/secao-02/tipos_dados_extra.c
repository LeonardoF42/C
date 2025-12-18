#include <stdio.h>

    //Estrutura do struct
    struct Pessoa{
        char nome[12];
        int idade;
    }; 

    //Estrutura do union
    union Dado{
        int i;
        float f;
    };

    //Estrutura do enum dias da semana, enumera os valores, começa no 0-zero
    enum Dia{DOM,SEG,TER,QUA,QUI,SEX,SAB};

int main(void){

    //Principais tipos de dados em C
    int num = 17;
    float altura = 1.75;
    double pi = 3.1415916;
    char letra = 'A';
    char nome[6] = "Bella";
    int valor_ponteiro = 37; // valor da variavel ponteiro
    int *ptr = &valor_ponteiro; // valor da memoria onde esta sendo guardada a váriavel ponteiro

    struct Pessoa p1 = {"Carla",27}; // criando um elemento do struct Pessoa e colocando valores nele

    union Dado d; //Criando uma variavel do tipo Union
    d.i = 27; //atribuindo o primeiro valor da variavel union


    typedef int inteiro; //define um tipo de variavel e cria um com o nome desejado, neste exmplo cria um tipo de variavel chamado inteiro do tipo int
    inteiro num_inteiro = 577; //atribui um valor a uma variavel do tipo inteiro

    enum Dia hoje = TER;



    //Escrevendo os valores
    printf("Numero int é %d\n",num);
    printf("Numero float altura é: %.2f\n",altura);
    printf("Numero double pi é: %.7f\n",pi);
    printf("Letra char é: %c\n", letra);
    printf("Nome char[6] é: %s\n",nome);
    printf("O valor da variavel é %d e o ponteiro indica o valor %p na memória\n",*ptr,ptr);
    printf("O valor do struct Pessoa é Nome: %s idade: %d\n",p1.nome,p1.idade);
    printf("O primeiro valor da variavel Union que é inteiro é: %d\n",d.i);
    d.f = 27.777; //Após isto não tem como recuperar  o valor anterior pois ocupa o mesmo espaço na memória
    printf("O segundo valor da variavel Union que é float é %.3f\n",d.f);
    printf("O valor do typedef inteiro criado é: %d\n",num_inteiro);
    printf("Qual o valor do dia da semana de hoje utilizando o enum: %d\n",hoje);


    return 0;
}