#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	system("color A");
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	system("pause");
	system("cls");
	printf("Idade: %d\n",idade);
	
	if(idade<18){
		printf("\nMenor de idade\n");
		
	}
	if (idade>=18){
		printf("\nMaior de idade\n");
	}
	system("pause");
	return 0;
}
