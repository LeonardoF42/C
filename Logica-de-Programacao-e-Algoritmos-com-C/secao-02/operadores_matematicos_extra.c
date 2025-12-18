#include <stdio.h>

int main(void){

    int w = 4 ,x = 5, y = 6, z = 7;
    int num_1 = 5,num_2 = 33;
    int a = 25;
    
    //Atribuição composta
    printf("O valor da soma composto de w e %d\n", w+=4);
    printf("O valor do subtracao composta de x e: %d\n",x-=2);
    printf("O valor da multiplicacao composto de y e: %d\n",y*=7);
    printf("O valor da divisao composto de z e: %d\n", z/=7);

    //Decremento e incremento
    printf("O valor incrementado da variavel num_1 e: %d\n",++num_1);
    printf("O valor decrementado da variavel num_2 e: %d\n",--num_2);

    //Pré e pós incremento
    printf("O valor da variavel a pre incremento e: %d\n",a++); // imprime 25, depois a = 26
    printf("O valor da variavel a pos incremento e: %d\n",++a); // a = 26 + 1, imprime 27
    return 0;
}