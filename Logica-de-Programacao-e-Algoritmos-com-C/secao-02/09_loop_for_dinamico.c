#include <stdio.h>

int main(void){
    
    int dias;

    printf("Digite a quantidade de dias treinados: ");
    scanf("%d",&dias);

    for(int i = 0; i < dias; i++){
        printf("Dia %d ta pago! \n", i+ 1);
    };

    printf("Treinamento concluido!\n");
    return 0;
}