#include <stdio.h>

int fibonacci(int num){
    if(num == 0){
        return 0;
    }
    if (num == 1){
        return 1;
    }
    
    return fibonacci(num - 1) + fibonacci(num -2);
}

int main(void){

    int num;
    int  numero_fibonaci;

    printf("Digite a quantidade de numeros da Fibonacci que deseja ver: ");
    scanf("%d", &num);

    printf("A Sequencia do Fibonacci e: ");

    for(int i = 0; i < num; i++){
        printf("%d ",fibonacci(i));
    }
    printf("\n");

    return 0;
}