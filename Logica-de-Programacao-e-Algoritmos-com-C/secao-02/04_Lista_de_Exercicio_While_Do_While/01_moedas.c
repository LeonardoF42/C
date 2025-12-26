/*
Exercício 1
Um jogador precisa coletar moedas em um jogo.
A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas. 
O jogo só termina quando o jogador acumula pelo menos 100 moedas. 
Escreva um programa em C que solicite ao usuário, repetidamente,
a quantidade de moedas coletadas por rodada, até que o total acumulado atinja ou ultrapasse 100 moedas. 
Ao final, exiba quantas rodadas foram necessárias para atingir a meta.

*/

#include <stdio.h>

int main(void){

    int moedas,rodada = 0, total = 0;

    while(total < 100){
        printf("=== RODADA %d === \n",rodada);
        printf("Digite a quantidades de moedas coletadas nesta rodada: ");
        scanf("%d",&moedas);

        total = total + moedas;

        printf("Moedas ate o momento: %d\n",total);
        rodada++;
    }
    printf("\nForam realizadas %d rodadas para obter %d moedas \n",rodada,total);

    return 0;
}