#include <stdio.h>
#include <stdlib.h>


unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * fatorial(n - 1); 
}
int main() {
	system("color a");
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial nao e definido para numeros negativos");
    } else {
        printf("O fatorial de %d e: %llu\n", num, fatorial(num));
    }

    return 0;
}


