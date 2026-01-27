#include <stdio.h>

union Dados{
    int num_i;
    float num_f;
    char c;
};

int main(void){
    
    union Dados d1;

    d1.num_i = 7;
    printf("O valor inteiro e : %d\n", d1.num_i);

    d1.num_f = 3.5;
    printf("O valor do numero flutuante e : %.2f\n", d1.num_f);

    d1.c = 'A';
    printf("A letra e: %c\n", d1.c);
    printf("O valor inteiro e : %d\n", d1.num_i);
    return 0;
}