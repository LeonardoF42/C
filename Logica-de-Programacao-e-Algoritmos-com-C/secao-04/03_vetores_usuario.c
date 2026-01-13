#include <stdio.h>

int main(void){

    char nome[3][20];

    for (int i = 0; i < 4; i++){
        printf("Digite o %dº nome: ", i+1);
        scanf("%s",nome[i]);
    }

    printf("Os nomes digitados foram: \n");
    for(int i = 0; i < 4; i++){
        printf("O %dº nome: %s\n",i+1, nome[i]);
    }

    return 0;
}