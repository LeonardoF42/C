#include <stdio.h>

unsigned long fatorial(unsigned long n){
    if(n == 1 || n == 0){
        return 1;
    }

    return n * fatorial(n-1);
}

int main(void){
    int num;
    unsigned long num_fatorial;

    printf("Digite um numero inteiro numero(max 20): ");
    scanf("%d",&num);

    num_fatorial = fatorial(num);

    printf("O %d! = %lu\n",num,num_fatorial);

    return 0;
}