/*
Exercício 2: Verificação de Nota e Frequência para Aprovação​

Você foi contratado para fazer um sistema simples de avaliação escolar.
O programa deve apresentar o seguinte menu:

1.Verificar se o aluno foi aprovado
2.Sair

​Se o usuário escolher a opção 1, o programa deve solicitar a nota final (de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).

O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência for maior ou igual a 75%. 
Use if else para essa verificação dentro do case 1.
Se o usuário escolher a opção 2, o programa deve encerrar.
Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".

*/

#include <stdio.h>

int main(void){

    int escolha;
    float nota,frequencia;

    printf("======= NOTAS e APROVACAO =======:\n1.Verificar se o aluno foi aprovado\n2.Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d",&escolha);
    
    switch(escolha){
        case 1:
            printf("Digite a nota do aluno (0 - 10): ");
            scanf("%f",&nota);
            printf("Digite a frequencia do aluno (0%% - 100%%): ");
            scanf("%f",&frequencia);
            if(nota >= 7 && frequencia >= 75 ){
                printf("Aluno APROVADO:\n Nota - %.2f Frequencia - %.2f%%\n",nota,frequencia);
            }else{
                printf("Aluno REPROVADO:\n Nota - %.2f Frequencia - %.2f%%\n",nota,frequencia);
            }
            break;
        case 2:
            printf("Encerrando programa ...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}
