/*
Um sistema de cadastro recebe a idade de uma pessoa como texto (string).
Escreva um programa em C que leia essa informação como uma string e depois converta para inteiro usando atoi.
Em seguida, exiba a idade e verifique se a pessoa é maior de idade (18 anos ou mais).

*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

    char idade_texto[10];

    printf("Digite a sua idade: ");
    scanf("%s",idade_texto);

    int idade_int = atoi(idade_texto);

    printf("Você tem %d anos.\n",idade_int);
    if( idade_int < 18){
        printf("Você é menor de idade \n");
    }else{
        printf("Você é maior de idade \n");
    }



    return 0;
}