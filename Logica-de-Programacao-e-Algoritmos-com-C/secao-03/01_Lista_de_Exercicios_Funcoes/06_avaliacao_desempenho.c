/*
6. Avaliação de desempenho
Você tem 5 jogadores. Para cada jogador, leia 3 notas de avaliação (float). 
Calcule a média de cada jogador. Use if/else para classificar:

Excelente: média >= 9
Bom: entre 7 e 9
Regular: entre 5 e 7
Ruim: abaixo de 5
*/

#include <stdio.h>

void avaliarDesempenho(float media){

    if( media>= 9){
        printf("Excelente");
    } else if(media >= 7 && media < 9){
        printf("Bom");
    } else if(media >= 5 && media < 7){
        printf("Regular");
    } else if( media < 5){
        printf("Ruim");
    }
}

int main(void){

    float nota1,nota2, nota3 ,media_nota;

    printf("Avaliacao de Jogadores\n");

    for(int i = 1; i <= 5;i++){
        printf("=== Avaliacao do aluno %d ===\n",i);
        printf("Digite a primeira nota do aluno %d: ",i);
        scanf(" %f",&nota1);
        printf("Digite a segunda nota do aluno %d: ",i);
        scanf(" %f",&nota2);
        printf("Digite a terceira nota do aluno %d: ",i);
        scanf(" %f",&nota3);

        media_nota = (nota1+nota2+nota3)/3;

        printf("A soma das notas deu %.2f e a media deu %.2f \n",(nota1+nota2+nota3),media_nota);
        printf("O aluno %d foi avaliado  como: ", i);
        avaliarDesempenho(media_nota);
        printf("\n\n");

    }

    return 0;
}