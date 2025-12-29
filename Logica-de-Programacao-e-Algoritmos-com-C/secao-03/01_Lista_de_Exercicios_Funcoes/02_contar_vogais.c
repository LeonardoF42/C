/*
2. Contar vogais em uma palavra
Crie uma função que recebe uma string (char[ ]) e retorna a quantidade de vogais.
Dica: Toda string termina com '\0'.
*/

#include <stdio.h>

int contarVogais(char p[]){
    int contador = 0;

    for(int i = 0; p[i] != '\0'; i++ ){
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u'){
            contador++;
        }
    }

    return contador;
}

int main(void){

    char palavra[100];

    printf("Digite uma palavra: ");
    scanf(" %s",palavra);

    printf("\nA quantdade de vogais na palavra %s são : %d\n", palavra,contarVogais(palavra));

    return 0;

}