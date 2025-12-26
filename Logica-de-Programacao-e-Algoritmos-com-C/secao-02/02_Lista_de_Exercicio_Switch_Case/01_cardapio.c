/*
Crie um programa que exiba um menu com 4 opções de lanches:

1.Hambúrguer
2.Cachorro-quente
3.Pizza
4.Sair
O usuário deve digitar a opção desejada e o programa deve mostrar uma mensagem correspondente.
Se o usuário digitar 4, o programa deve exibir "Encerrando pedido...". 
Se digitar qualquer outro número, mostrar "Opção inválida!".

*/


#include <stdio.h>

int main(void){
    
    int opcao;

    printf("Ola Boa tarde aqui estao as opcoes que voce pode fazer\n");
    printf("1.Hamburguer\n2.Cachorro-quente\n3.Pizza\n4.Sair\n");
    printf("Digite sua opcao: ");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            printf("Escolheu Hamburguer\n");
            break;
        case 2:
            printf("Escolheu Cachorro quente\n");
            break;
        case 3:
            printf("Escolheu Pizza\n");
            break;
        case 4:
            printf("Esscolheu Sair encerrando...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}