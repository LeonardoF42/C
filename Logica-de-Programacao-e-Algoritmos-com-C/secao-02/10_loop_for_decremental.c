#include <stdio.h>

int main(void){
    
    int contagem;

    printf("Digite quando a contagem iniciara: ");
    scanf("%d",&contagem);

    for(int i = contagem; i > 0; i--){
        printf("%d...\n",i);
    }
    printf("...O FIM\n");

    return 0;
}