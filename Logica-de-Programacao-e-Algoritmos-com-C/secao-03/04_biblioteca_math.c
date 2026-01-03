/*

Biblioteca <math.h>  -  funções matematica

algumas funções desta biblioteca
sqrt() -> raiz quadrada
pow() -> potência
fabs() -> valor absoluto
sin(), cos(), tan() -> trigonometria


*/


#include <stdio.h>
#include <math.h>

int main(void){

    printf("A raiz quadrada de 75 e:  %.2f \n",sqrt(75));
    printf("A potencia de 7 por 9 : %.2f\n",pow(7,9));
    printf("Sua divida e de:  %.2f\n",fabs(700.37 - 1000000));


    return 0;
}