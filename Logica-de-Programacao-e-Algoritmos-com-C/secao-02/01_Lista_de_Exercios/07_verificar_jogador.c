#include <stdio.h>

int main(void){

    int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d",&idade);

    if(idade <= 20){
        printf("Jogador pode jogar na categoria SUB-20 pois tem %d anos\n",idade);
    }else{
        printf("Jogador deve jogar na categoria profissional pois possui %d anos\n",idade);
    }

    return 0;
}