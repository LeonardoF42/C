/*
3 - Selecionando números pares
Crie um programa que recebe 10 números inteiros do usuário e retorna um array com apenas os números pares.
*/

#include <stdio.h>

int main(void){
    int numero_intieros[10],par, numero_par[10],contador = 0;

    printf("Numeros\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero: ",i+1);
        scanf("%d",&numero_intieros[i]);
        
        if(numero_intieros[i] % 2 == 0){
            numero_par[contador] = numero_intieros[i];
            contador ++;
        }
    }

    printf("\nOs numeros digitados foram: ");
    for(int i = 0; i < 10; i++){
        printf("%d ",numero_intieros[i]);
    }

    printf("\nA quantidade de numeros pares foram : %d\n",contador);
    printf("Os numeros pares foram: ");
    for(int i = 0; i < contador; i++){
        printf("%d ",numero_par[i]);
    }
    printf("\n");

    return 0;
}