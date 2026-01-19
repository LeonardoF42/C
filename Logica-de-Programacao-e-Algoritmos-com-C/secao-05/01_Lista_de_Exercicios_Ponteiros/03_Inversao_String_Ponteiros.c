/*
Exercício 3: Inversão de String com Ponteiros
Crie uma função que inverte uma string alocada dinamicamente usando ponteiros.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteString(char *string){
    int tamanho = strlen(string);
    char letratemporaria;
    for(int i = 0; i < tamanho / 2; i++){   
        letratemporaria = string[i];
        string[i] = string[tamanho - 1 - i];
        string[tamanho -1 -i] = letratemporaria;
    }
}

int main(void){

    char *palavra = (char *) malloc(100 * sizeof(char));

    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    
    if(palavra == NULL){
        printf("ERRO na alocação de memória\n");
        return 1;
    }

    printf("\nA palavra Original foi: %s",palavra);

    inverteString(palavra);

    printf("\nA palavra Invertida é: %s\n",palavra);

    free(palavra);

    return 0;
}