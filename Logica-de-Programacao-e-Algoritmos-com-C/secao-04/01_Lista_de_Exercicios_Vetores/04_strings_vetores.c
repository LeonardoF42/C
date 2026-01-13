/*
4 - Trabalhando com strings
Crie um programa que recebe 5 nomes e imprime apenas os nomes que contêm um determinado caracter definido pelo usuário.
Exemplo: letra 'a'.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char nome[5][30], caracter;

    printf("Digite o caracter que quer filtrar: ");
    scanf(" %c",&caracter);


    printf("--- Digite os 5 nomes ---\n");
    for(int i = 0; i < 5; i++){
        printf("%dº nome: ", i+1);
        scanf("%s", nome[i]);
    }

    

    printf("\nO caracter buscado foi '%c' e os nomes que o possui foram: \n",caracter);
    for(int i = 0; i < 5; i++){ // o nome
        for(int j = 0; j < strlen(nome[i]); j++){ // cada letra do nome, strlen conta o tamanho real do nome digitado
            if(nome[i][j] == caracter){
                printf("%s \n", nome[i]);
                break; //Usa o break para não repetir o nome
            }
        }
    }

    return 0;
}