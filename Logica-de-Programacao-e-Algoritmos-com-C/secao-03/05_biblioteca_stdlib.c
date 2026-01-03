/*

<stdlib.h> - biblioteca de utilidades

algunmas funções
rand() -> numero aleatorio
srand() -> inicializa o gerador com uma semente
atoi(), atof() -> convert string para int, float
exit () - > encerra o programa.

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    char textoint[] = "903";
    char textofloat[] = "27.45";

    srand(time(NULL));

    int numsrand = rand() % 1000;

    printf("O numero randomico da funcao srand foi %d\n", numsrand);

    int numint = atoi(textoint);
    float numfloat = atof(textofloat);

    printf("A soma de %s + 10 e: %d\n", textoint,numint+10);
    printf( "A soma de %s + 17.34 e: %.2f\n", textofloat,numfloat+17.34);
    return 0;
}