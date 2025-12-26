/*
8 - Controle de Estoque no Supermercado
O supermercado deseja controlar o estoque de seus produtos e verificar quais precisam ser repostos. O programa deve:

Pedir ao usuário quantos produtos ele deseja cadastrar.
Para cada produto, solicitar:
- Nome do produto

- Quantidade em estoque

- Estoque mínimo recomendado

- Exibir imediatamente se o produto precisa de reposição ou não.

Exemplo:
Digite a quantidade de produtos a serem cadastrados: 3
Produto 1:
Nome do produto: Nescau
Quantidade em estoque: 10
Estoque mínimo recomendado: 20
-> O produto 'Nescau' precisa ser reposto! (Estoque: 10, Mínimo: 20)
 
Produto 2:
Nome do produto: Laranja
Quantidade em estoque: 7
Estoque mínimo recomendado: 4
-> O produto 'Laranja' tem estoque suficiente. (Estoque: 7, Mínimo: 4)
 
Produto 3:
Nome do produto: Abobrinha
Quantidade em estoque: 8
Estoque mínimo recomendado: 90
-> O produto 'Abobrinha' precisa ser reposto! (Estoque: 8, Mínimo: 90)
*/

#include<stdio.h>

int main(void){

    int qtd_cadastro,em_estoque,estoque_minimo;
    char nome_produto[30];

    printf("Digite a quantidade de produtos que deseja cadastra: ");
    scanf("%d", &qtd_cadastro);


    for(int i = 1; i <= qtd_cadastro; i++){
        printf("\nProduto %d:\n", i);
        printf("Nome do produto: ");
        scanf("%s", &nome_produto);
        printf("Quantidade em estoque: ");
        scanf("%d",&em_estoque);
        printf("Estoque minimo recomendado: ");
        scanf("%d", &estoque_minimo);
        if(em_estoque > estoque_minimo){
            printf("-> O produto '%s' tem estoque suficiente. (Estoque: %d, Minimo: %d)\n",nome_produto,em_estoque,estoque_minimo);
        }else{
            printf("-> O produto '%s' precisa ser reposto! (Estoque: %d, Minimo: %d)\n",nome_produto,em_estoque,estoque_minimo );
        }
    }

    return 0;
}