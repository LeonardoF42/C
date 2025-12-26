#include <stdio.h>

int main(void){
    char opcao;
    float x,y;

    printf("Escolha um operador para o calculo: (+,-,*,/):");
    scanf("%c",&opcao);
    if(opcao != '+' && opcao != '-' && opcao != '*' && opcao != '/'){
        printf("Escolheu opcao invalida, calculadora encerrada\n");
    }else{
        printf("Digite os dois valores para o calculo: ");
        scanf("%f %f",&x,&y);
        switch(opcao){
            case '+':
                printf("A soma de %.2f + %.2f e = %.2f\n",x,y,(x+y));
                break;
            case '-':
                printf("A subtracao de %.2f - %.2f e = %.2f\n",x,y,(x-y));
                break;
            case '*':
                printf("A multiplicacao de %.2f * %.2f e = %.2f\n",x,y,(x*y));
                break;
            case '/':
                if(y == 0){
                    printf("Impossivel dividir por zero\n");
                }else{
                    printf("A divisao de %.2f / %.2f e = %.2f\n",x,y,(x/y));
                }
                break;
            default:
                ("Programa encerrado algum erro aconteceu ");
        }
    }
    return 0;
}