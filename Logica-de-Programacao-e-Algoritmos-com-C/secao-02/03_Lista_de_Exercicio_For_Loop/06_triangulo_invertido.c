/*
6 - Triângulo invertido de números
Crie um programa que imprima um triângulo invertido de números.
🔹 O usuário entra com um número N.
🔹 A saída esperada, para N = 5, seria:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
​1

*/


#include <stdio.h>

int main(void){
    
    int n;

    printf("Digite o numero do n: ");
    scanf("%d",&n);

    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}