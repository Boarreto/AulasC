#include <stdio.h>

int main(void) {
    int m, n, i, j;
    
    // Leitura do número de linhas e colunas
    printf("Digite o número de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n): ");
    scanf("%d", &n);

    // Declaração da matriz usando Variable Length Arrays (C99)
    int matriz[m][n];

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Variáveis para armazenar as somas dos pares e ímpares
    int somaPares = 0;
    int somaImpares = 0;

    // Processamento: percorre a matriz e acumula as somas
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            if (matriz[i][j] % 2 == 0) {
                somaPares += matriz[i][j];
            } else {
                somaImpares += matriz[i][j];
            }
        }
    }

    // Impressão dos resultados
    printf("\nSoma dos números pares: %d\n", somaPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);

    return 0;
}

