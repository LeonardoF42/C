#include <stdio.h>

int main(void){

    int senha;

    do{
        printf("Digite a senha: ");
        scanf("%d",&senha);

    } while (senha != 777);
    printf("Acesso liberado\n");
    

    return 0;
}