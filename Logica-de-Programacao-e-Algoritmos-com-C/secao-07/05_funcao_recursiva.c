#include <stdio.h>

void contar(int num){
    if(num > 7){
        return;
    }

    printf("Numero %d\n", num);
    contar(num + 1);
}

int main(void){

    contar(1);

    return 0;
}