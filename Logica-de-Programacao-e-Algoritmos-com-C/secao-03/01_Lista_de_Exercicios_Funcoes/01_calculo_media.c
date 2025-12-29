/*
1. Calcular a média de dois números
Crie uma função que recebe duas notas (float) e retorna a média com 2 casas decimais.
*/

#include <stdio.h>

float calcularMedia(float x, float y){
    return (x+y)/2;

}

int main(void){
    float num1,num2;

    printf("Digite a primeira nota: ");
    scanf("%f",&num1);
    printf("Digite a segunda nota: ");
    scanf("%f",&num2);

    printf("A media da nota %.2f e nota %.2f e : %.2f\n", num1,num2, calcularMedia(num1,num2));

    return 0;
}