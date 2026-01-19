#include <stdio.h>

int main(void){

    int num = 7;
    int *ptr; // Declaração de um ponteiro para inteiro

    ptr = &num; // O ponteiro 'ptr' recebe o endereço de 'num'

    printf("O valor da variavel num é %d: \n", num);
    printf("O endereço de memória é : %p\n", ptr);
    printf("O valor guradado no endereço é: %d\n", *ptr);

    return 0;
}