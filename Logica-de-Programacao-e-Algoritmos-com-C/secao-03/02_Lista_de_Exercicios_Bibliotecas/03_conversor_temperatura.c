/*
3. Conversor de temperatura
Um sensor envia a temperatura de um ambiente como texto, por exemplo "25.7".
Escreva um programa que leia essa temperatura como string, converta para float com atof e depois informe
se o ambiente está frio (abaixo de 18°C), agradável (entre 18°C e 26°C) ou quente (acima de 26°C).


*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

    char temperatura_texto[10];

    printf("Digite a temperatura atual: ");
    scanf("%s", temperatura_texto);

    float temperatura_float = atof(temperatura_texto);

    printf("A temperatura atual é %.2f e o ambiente esta ",temperatura_float);
    
    if(temperatura_float < 18){
        printf("frio.\n");
    } else if( temperatura_float <= 26){
        printf("agradável.\n");
    } else{
        printf("quente.\n");
    }



    return 0;
}