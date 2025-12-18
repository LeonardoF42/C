/*

4 - Calculando o Aproveitamento de um Time
Crie um programa que peça o número de vitórias, empates e derrotas de um time. Depois, calcule o número total de pontos, seguindo a regra:
Vitória = 3 pontos
Empate = 1 ponto
Derrota = 0 pontos
*/

#include <stdio.h>

int main(void){

    int vitoria,empate,derrota,total_pontos;

    printf("Digite o numero de vitorias do time: ");
    scanf("%d",&vitoria);
    printf("Digite o numero de empates  do time: ");
    scanf("%d",&empate);
    printf("Digite o numero de derrotas do time: ");
    scanf("%d",&derrota);

    total_pontos = (vitoria*3)+ empate;

    printf("======= RESULTADO ======\n");
    printf("O total de pontos da equipe foi: %d pts\n",total_pontos);
    return 0;
}