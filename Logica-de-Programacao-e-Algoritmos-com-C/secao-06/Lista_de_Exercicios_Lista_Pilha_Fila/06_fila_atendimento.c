/*
6. Implemente uma fila para simular o atendimento em um banco. O programa deve permitir:
Inserir cliente na fila
Atender (remover) o próximo cliente
Mostrar a fila atual

*/

#include <stdio.h>
#include <string.h>

char fila[10][75];
int inicio = 0;
int fim = 0;
int tamanho_maximo = 10;

void enqueue(char nome[]){
    if(fim == 10){
        printf("A Fila esta cheia\n");
        return;
    }
    strcpy(fila[fim++],nome);
}



void dequeue(){
    if(fim == 0){
        printf("A fila esta vazia!!!");
        return;
    }

    printf("Atendendo cliente %s",fila[0]);
    for(int i = 0; i < 10; i++ ){;
        strcpy(fila[i], fila[i + 1]);
    }
    fim--;
}


void imprimirFila(){
    if(fim == 0){
        printf("A Fila esta vazia\n");
        return;
    }
    
    printf("Os elementos da fila sao:");
    for(int i = 0; i < fim; i++){
        printf(" %d - %s",i+1,fila[i]);
    }
    printf("\n");
}

int main(void){

    int escolha,temp;
    char cliente[75];


    printf("=== ATENDIMENTO === \n");
    do{
        printf("\n Opcoes:\n 1 - Inserir Cliente na fila\n 2 - Atender o cliente\n 3 - Mostrar fila Atual\n 4 - Encerrar Programa\n Digite a sua escolha: ");
        scanf("%d", &escolha);
        getchar();

        switch (escolha){
            case 1:
                printf("Inserir cliente na fila\n");

                printf("Digite o nome do cliente: ");
                fgets(cliente,sizeof(cliente),stdin);
                cliente[(strcspn(cliente,"\n"))] = '\0';

                enqueue(cliente);
                printf("%s adicionado na fila\n");
                break;
            case 2:
                printf("Atender cliente \n");

                dequeue();
                break;
            case 3:
                printf("Mostrar fila Atual\n");
                imprimirFila();
                break;
            case 4:
                printf("... o programa foi finalizado com sucesso\n");
                break;
            default:
                printf("Valor incorreto digitado\n Escolha uma opcao valida ");
        }
    } while (escolha != 4);

    return 0;
}