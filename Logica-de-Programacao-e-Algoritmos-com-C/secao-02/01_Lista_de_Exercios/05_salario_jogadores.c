/*
5 - Diferença de Salários entre Jogadores
Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.
*/
#include <stdio.h>

int main(void){
    double salario_jogador1,salario_jogador2,diferenca;

    printf("Digite o salario do primeiro jogador: ");
    scanf("%lf",&salario_jogador1);
    printf("Digite o salario do jogador 2: ");
    scanf("%lf",&salario_jogador2);

    if(salario_jogador1 > salario_jogador2){
        diferenca = salario_jogador1 - salario_jogador2;
        printf("A diiferenca do salario %.2f - %.2f e: R$ %.2f\n",salario_jogador1,salario_jogador2,diferenca);
    } else if(salario_jogador2 > salario_jogador1){
        diferenca = salario_jogador2 - salario_jogador1;
        printf("A diferenca do salario %.2f - %.2f e: R$ %.2f\n",salario_jogador2,salario_jogador1,diferenca);
    } else{
        printf("O valor dos salario %.2f e %.2f são o mesmo\n",salario_jogador1,salario_jogador2);
    }

    return 0;
}