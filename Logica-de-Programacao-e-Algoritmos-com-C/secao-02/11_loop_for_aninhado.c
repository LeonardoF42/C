#include <stdio.h>

int main(void){

    int num;

    printf("Escolha o numero para a tabuada: ");
    scanf("%d",&num);

    for(int i = 0; i <= num; i++){
        printf("TABUADA ATE %d\n", num);
        for(int j = 0; j <= 10; j++){
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("_________________________\n");
    }

    return 0;
}