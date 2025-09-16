#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n, i;
	double soma = 0.0;
	
	system("color a");
	
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	

	for(i = 1; i <= n; i++ ){
		
		soma += 1.0 / i;
}
	
	printf("O resultado do somatorio e: %.2f", soma);   
		
	return 0;
}
