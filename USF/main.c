#include <stdio.h>

int main() {
    int x,i;
    double soma = 0.0;

    printf("Digite um valor inteiro positivo para x: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Erro: x deve ser um inteiro positivo");
        return 1;
    }

    for (i = 1; i <= x; i++) {
        soma += (double)i / (x - i + 1); 
    }

    printf("O valor do somatorio S e: %.2lf", soma);

    return 0;
}

