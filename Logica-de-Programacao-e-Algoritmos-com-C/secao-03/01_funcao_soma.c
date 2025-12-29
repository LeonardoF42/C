#include <stdio.h>

int somar(int x, int y){
    return x + y;
}

int main(void){

    int num1,num2;
    int resultado = somar( 5,2);

    printf("Digite o primeiro numero para a soma: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero para a soma: ");
    scanf("%d",&num2);

    printf("\nO resultado da soma 1 e: %d\n",resultado);
    printf("O resultado da soma 2 e: %d\n",somar(10,7));
    printf("O resultado da soma 3 e: %d\n", somar(15,12));
    printf("O resultado da soma 4 e: %d\n", somar(num1,num2));

    return 0;
}