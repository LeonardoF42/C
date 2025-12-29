/*
3. Encontrar o maior de três números
Crie uma função que receba três inteiros e retorne o maior deles.
*/

#include <stdio.h>

int maiorNumero(int num1,int num2, int num3){
    if(num1 > num2 && num1 > num3){
        return num1;
    }else if(num2 > num1 && num2 > num3){
        return num2;
    } else{
        return num3;
    }

}

int main(void){

    int x,y,z;

    printf("Digite o primeiro numero: ");
    scanf("%d",&x);
    printf("Digite o segundo numero: ");
    scanf("%d",&y);
    printf("Digite o terceiro numero: ");
    scanf("%d",&z);

    printf("O numero %d foi o maior digitado\n", maiorNumero(x,y,z));

    
    return 0;
}
