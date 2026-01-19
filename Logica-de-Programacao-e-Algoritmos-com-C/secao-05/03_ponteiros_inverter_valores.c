#include <stdio.h>

    void troca(int *a, int *b){
        int temp;
        
        temp = *a;
        *a = *b;
        *b = temp;

    }

int main(void){

    int x = 30, y = 40;

    printf("Oa valores antes da troca são: x = %d e y = %d \n", x,y);
    
    troca(&x,&y);

    printf("Os valores após a troca são : x = %d e y = %d\n",x,y);

    return 0;
}