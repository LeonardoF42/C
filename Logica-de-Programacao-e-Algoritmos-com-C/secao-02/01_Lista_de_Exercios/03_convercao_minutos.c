/*
3 - Conversão de Minutos para Tempo de Jogo
Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.
*/

#include <stdio.h>

int main(void){

    int tempo_jogado,horas,minutos;

    printf("Digite os minutos jogados: ");
    scanf("%d",&tempo_jogado);
    horas = tempo_jogado / 60;
    minutos = tempo_jogado % 60;

    printf("======= RESULTADO =======\n");
    printf("Os tempo jogados em minutos foram: %d\n",tempo_jogado);
    printf("O tempo jogado foi %d horas e %d minutos \n",horas,minutos);
    
    return 0;
}