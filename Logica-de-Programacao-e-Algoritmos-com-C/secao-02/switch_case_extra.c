#include <stdio.h>

int main(void){

    int opcao;
    printf("Qual esporte voce deseja ver hoje:\n");
    printf("1-NFL\n2-NBA\n3-MLB\n4-NHL\n\n");
    printf("Digite a sua escolha: ");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            printf("Escolheu NFL, vamos assistir jogo do New York Giants\n");
            break;
        case 2:
            printf("Escolheu NBA, vamos assistir jogo do New York Knicks\n");
            break;
        case 3:
            printf("Escolheu MLB, vamos assistir jogo do Baltimore Orioles\n");
            break;
        case 4:
            printf("Escolheu NHL, vamos assistir jogo do Vegas Golden Knights\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}