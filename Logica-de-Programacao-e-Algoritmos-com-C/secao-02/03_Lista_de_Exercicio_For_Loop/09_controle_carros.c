/*
9 - Controle de Revisão de Carros
Uma concessionária deseja criar um sistema para registrar os carros que entram para revisão e verificar quais precisam de reparos urgentes. O sistema deve:

1. Pedir ao usuário quantos carros serão registrados.
2. Para cada carro, solicitar:

- Modelo
- Ano de fabricação
- Se está funcionando normalmente (1 ou 0).

3. Exibir uma mensagem indicando se o carro está em boas condições ou se precisa de reparos urgentes (se for muito antigo ou estiver com problemas).

- Se o ano for menor que 2005 e o carro não estiver funcionando normalmente, então, retorne "O carro X precisa de REPAROS URGENTES!".

- Se o ano for menor que 2005 e o carro estiver funcionando normalmente, então, retorne "O carro X é antigo, recomenda-se uma revisão!".

- Se o ano for igual ou maior que 2005 e não estiver funcionando normalmente, então, retorne "O carro X precisa de manutenção!".

- Se o ano for igual ou maior que 2005 e estiver funcionando normalmente, então, retorne "O carro X está em boas condições!".
*/


#include <stdio.h>

int main(void){

    int carros, ano,condicao;
    char modelo[30];

    printf("Digite a quantidade de veiculos para cadastro: ");
    scanf("%d",&carros);

    for(int i = 1; i <= carros; i++){
        printf("\nModelo: ");
        scanf("%s", &modelo);
        printf("Ano fabricado: ");
        scanf("%d", &ano);
        printf("Funciona normalamente(0 - nao, 1 - sim): ");
        scanf("%d", &condicao);

        if(ano < 2005 && condicao == 0){
            printf("O carro %s precisa de REPAROS URGENTES! \n", modelo);
        }else if(ano < 2005 && condicao == 1){
            printf("O carro %s e antigo, recomenda-se revisao! \n", modelo);
        } else if(ano >= 2005 && condicao == 0){
            printf("O carro %s precisa de manutencao! \n",modelo);
        }else if(ano >= 2005 && condicao == 1){
            printf("O carro %s esta em boas condicoes! \n", modelo);
        }


    }


    return 0;
}