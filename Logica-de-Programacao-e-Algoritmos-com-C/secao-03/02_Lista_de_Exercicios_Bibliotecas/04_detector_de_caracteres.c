/*
. Detector de caracteres proibidos
Imagine que você está desenvolvendo um sistema para um jogo online que proíbe o uso de certos caracteres especiais no nome dos jogadores. Escreva um programa em C que:
Leia o nome de usuário digitado pelo jogador (máximo 50 caracteres);
Calcule o tamanho do nome usando strlen();
Verifique se o nome contém algum dos seguintes caracteres proibidos: @, #, $, %, !;
Informe ao usuário quantos caracteres inválidos foram encontrados;
Mostre uma mensagem avisando se o nome é válido ou inválido com base nessa verificação.
Exemplo de saída:
Digite seu nome de usuario: x@bl@u!
Nome invalido! 3 caractere(s) proibido(s).
*/
#include <stdio.h>
#include <string.h>

int contador_carcteres_proibidos(char nome[],int tamanho){
    int contador = 0;

    for(int i = 0; i <= tamanho; i++){
        if(nome[i] == '@' || nome[i] == '#' || nome[i] == '$' || nome[i] == '%' || nome[i] == '!'){
            contador ++;
        }
    }

    return contador;
}

int main(void){

    char nome[50];
    int tamanho_nome;
    int contador;

    printf("Digite o nome (sem espaço) para o usuario: ");
    scanf("%s", nome);

    tamanho_nome = strlen(nome);

    contador = contador_carcteres_proibidos(nome,tamanho_nome);

    printf("Olá %s\n",nome);
    if (contador == 0){
        printf("O seu nome é válido.\n");
    }else{
        printf("Nome inálido!!! %d caracteres proibidos encontrado.\n", contador);
    }



    return 0;
}