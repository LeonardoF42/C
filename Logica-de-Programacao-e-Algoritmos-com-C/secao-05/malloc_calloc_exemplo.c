#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // 1. Exemplo com MALLOC
    // Aloca espaço, mas não limpa o que estava lá antes
    int *vetor_malloc = (int *) malloc(n * sizeof(int));
    
    printf("--- MALLOC (pode conter 'lixo') ---\n");
    for(int i = 0; i < n; i++) {
        printf("Posicao %d: %d\n", i, vetor_malloc[i]);
    }

    // 2. Exemplo com CALLOC
    // Aloca espaço e ZERA todos os bits
    int *vetor_calloc = (int *) calloc(n, sizeof(int));
    
    printf("\n--- CALLOC (sempre zerado) ---\n");
    for(int i = 0; i < n; i++) {
        printf("Posicao %d: %d\n", i, vetor_calloc[i]);
    }

    // BOA PRÁTICA: Sempre liberar o que foi alocado
    free(vetor_malloc);
    free(vetor_calloc);

    return 0;
}