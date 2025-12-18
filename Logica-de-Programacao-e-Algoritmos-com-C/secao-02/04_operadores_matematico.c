#include <stdio.h>

int main(void){

    int valor_1 = 10,valor_2 = 2;
    int valor_soma1 = 7, valor_soma2 = 5,resultado_soma;

    resultado_soma = valor_soma1 + valor_soma2; // valor da soma atribuido a uma variavel
    printf("O resultado da soma %d + %d = %d\n",valor_soma1,valor_soma2,resultado_soma);
    
    
    printf("A soma de %d + %d = %d\n", valor_1,valor_2,valor_1 + valor_2); //soma realizada dentro do printf
    printf("A subtracao de %d - %d = %d\n",valor_1,valor_2,valor_1 - valor_2); //SUBTRAÇÃO
    printf("A multiplicacao de %d * %d = %d\n",valor_1,valor_2,valor_1 * valor_2); //MULTIPLICAÇÃO
    printf("A divisao de %d / %d = %d\n",valor_1,valor_2, valor_1 / valor_2); //DIVISÃO
    printf("O modulo(resto da divisao) de %d %% %d = %d\n",valor_1,valor_2, valor_1 % valor_2); //MÓDULO, RESTO DA DIVISÃO
    return 0;
}