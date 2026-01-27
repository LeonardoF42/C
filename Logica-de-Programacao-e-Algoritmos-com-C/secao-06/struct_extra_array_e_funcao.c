#include <stdio.h>

typedef struct{
    char nome[40];
    float notas;
}Alunos;

void imprimirAlunos(Alunos *a){
    printf("Nome: %s -- Nota: %.2f\n",a->nome,a->notas);
}


int main(void){

    Alunos turma[3] = {
        {"Gizelle Gouveia",7.4},
        {"Helena Heinz",5.6},
        {"Ilda Iman",8.7}
    };

    printf("=== Lista Alunos === \n");
    for(int i = 0; i < 3; i++){
        imprimirAlunos(&turma[i]);
    }

    return 0;
}