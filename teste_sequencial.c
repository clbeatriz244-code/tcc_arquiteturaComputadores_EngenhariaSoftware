#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3000

int main() {

    static int matriz[TAM][TAM];
    long long soma = 0;

    // Preenchendo matriz
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            matriz[i][j] = i + j;
        }
    }

    clock_t inicio = clock();

    // ACESSO SEQUENCIAL (por linha)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            soma += matriz[i][j];
        }
    }

    clock_t fim = clock();

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Soma: %lld\n", soma);
    printf("Tempo de execucao (sequencial): %f segundos\n", tempo);

    return 0;
}

