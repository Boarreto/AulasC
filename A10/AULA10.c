#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int i,j,star,tamanho;

int main(int argc, char *argv[]) {
	system("color A");
	printf("Feliz Natal!\n");
	printf("Tamanho: ");
	scanf("%d",&tamanho);
	printf("\n");
	for(i=1; i<=tamanho;i++){
		for(j=1; j<=tamanho-i; j++){
			printf(" ");
		}
		for(star=1;star<=i*2-1;star++){
			printf("*");
		}
		printf("\n");
	}
	
	
	
	printf("\n");
	system("pause");
	return 0;
}
