#include <stdio.h>

// Função que calcula a soma da diagonal principal da matriz
int somatorioDiagonal(int n, int matriz[][n]) {
	int i;
    int soma = 0;
    for (i = 0; i < n; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int main(void) {
    int n,i,j;
    
    printf("Digite o tamanho da matriz quadrada (n): ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Calcula a soma da diagonal principal
    int soma = somatorioDiagonal(n, matriz);
    printf("A soma da diagonal principal é: %d\n", soma);
    
    return 0;
}

