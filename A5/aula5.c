#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color A");
	float nota1,nota2,media;
	printf("Digite a nota1: ");
	scanf("%f",&nota1);
	system("cls");
	printf("Digite a nota2: ");
	scanf("%f",&nota2);
	system("pause");
	system("cls");
	media = (nota1+nota2)/2;
	printf("Media: %.2f\n",media);
	printf("\nNota 1: %.2f\n",nota1);
	printf("\nNota 2: %.2f\n",nota2);
	
	system("pause");
	system("cls");
	
	if(media<6){
		
		printf("Abaixo da media\n");
	
	}else{
		
		printf("Aprovado\n");
		
	}
	
	system("pause");
	return 0;
}
