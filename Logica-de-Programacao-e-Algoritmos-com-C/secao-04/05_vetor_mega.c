#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int mega[6];
    int aposta[6] = {9,13,22,31,58,59};
    int acertos = 0;

    srand(time(NULL));
    printf("Numros sorteados da mega !!!\n");
    
    for(int i = 0; i < 6; i++){
        mega[i] = rand() % 60 + 1;
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(aposta[i] == mega[j]){
                acertos++;
                printf("O numero %d foi sorteado\n", aposta[i]);
            }
        }
    }

    printf("\nOs numeros da mega foram: ");
    for(int i = 0; i < 6; i++){
        printf("%d ", mega[i]);
    }

    printf("\nOs seus numeros foram: ");
    for(int i = 0; i < 6; i++){
        printf("%d ", aposta[i]);
    }

    printf("\nVocê acertou %d numeros\n",acertos);


    return 0;
}