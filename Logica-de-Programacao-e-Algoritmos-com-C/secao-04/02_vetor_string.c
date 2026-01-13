#include <stdio.h>

int main(void){

    char palavra[20] = "Anna";
    char nomes[3][20] = {"Bella","Carolina","Debora"};

    printf("%s\n", palavra);
    printf("%c\n", palavra[0]);
    printf("______________________________\n");
    for(int i = 0; i < 3; i++){
        printf("%s - %c\n",nomes[i],nomes[i][0]);
    }


    return 0;
}