/*
10 – Classificação do nível da partida com base na quantidade de torcedores
Escreva um programa que solicita ao usuário:
A capacidade total do estádio.
A quantidade de torcedores presentes no jogo.
Com base na taxa de ocupação do estádio, o programa deve classificar a partida da seguinte forma:
✅ Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"
✅ Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"
✅ Se estiver entre 50% e 70% (inclusive): "Público razoável."
✅ Se estiver abaixo de 50%: "Vila Belmiro"
*/
#include <stdio.h>

int main(void){
    
    int capacidade,torcedores;
    float porcentagem;

    printf("Digite a capacidade do estadio: ");
    scanf("%d",&capacidade);
    printf("Digite a quantidade de torcedores presente: ");
    scanf("%d",&torcedores);

    porcentagem = (float)torcedores/capacidade * 100;

    printf("======= RESULTADO =======\n");
    printf("Porcentagem  atual: %.2f%%\n",porcentagem);
    if(porcentagem > 90){
        printf("Lotado!\n");
    } else if(porcentagem <= 90 && porcentagem > 70){
        printf("Ótima presença de público!\n");
    } else if(porcentagem <= 70 && porcentagem >= 50){
        printf("Público razoável.\n");
    }else{
        printf("Vila Belmiro\n");
    }

    return 0;
}