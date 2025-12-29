#include <stdio.h>

void exibirMenu(){

    printf("\n=== MENU === \n");
    printf("1 - Ver Saldo\n");
    printf("2 - Fazer deposito\n");
    printf("3 - Fazer saque\n");
    printf("4 - Sair\n");
}

void despedida(){
    printf("\nPrograma encerrado\nObrigado por nos visitar\n");
}


int main(void){

    int opcao;
    
    do{
        exibirMenu();

        printf("Digite uma opcao: ");
        scanf("%d",&opcao);

        printf("Sua escolha foi: %d\n", opcao);
    }while(opcao != 4);
    despedida();

    return 0;
}