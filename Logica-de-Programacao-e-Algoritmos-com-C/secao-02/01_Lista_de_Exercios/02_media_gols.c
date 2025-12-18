#include <stdio.h>

int main(void){

    int gols,jogos;
    float media;

    printf("Digite o numero de gols: ");
    scanf("%d",&gols);
    printf("Digite o numero de partidas: ");
    scanf("%d",&jogos);

    media = (float)gols/jogos; // fazer a variavel meida float receber a divisao de duas variaveis inteiro

    printf("======= RESULTADO =======\n");
    printf("Gols feitos: %d\nPartidas disputadas: %d\nMedia de gols: %.2f\n",gols,jogos,media);



    
    return 0;
}