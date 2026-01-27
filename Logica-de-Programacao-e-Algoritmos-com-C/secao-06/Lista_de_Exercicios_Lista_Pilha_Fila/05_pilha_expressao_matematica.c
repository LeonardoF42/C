/*
5. Escreva um programa em C que verifica se os parênteses em uma expressão matemática estão balanceados usando uma pilha.
Exemplo:
Entrada: (2+3)*(4+(5-1)) → Saída: Balanceado
Entrada: ((3+4)*(2-1) → Saída: Não balanceado​
*/

#include <stdio.h>
#include <string.h>


char pilha[100];
int topo = -1;

void push(char c){
    topo++;
    pilha[topo] = c;

}

void pop(){
    if(topo >= 0){
        topo--;
    }
}


int main(void){
    char expressao[100];
    int b = 1;

    printf("Digite a expressao matematica: ");
    scanf("%s",&expressao);

    for(int i = 0; i < strlen(expressao); i++){
        if(expressao[i] == '('){
            push('(');
        }else if (expressao[i] == ')'){
            if(topo == -1){
                b = 0;
                break;
            }else{
                pop();
            }

        }
    }

    if(b && topo == -1){
        printf("Balanceado\n");
    }else{
        printf("NAO Balanceado\n");
    }

    return 0;
}