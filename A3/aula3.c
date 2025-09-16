#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[50];
	system("color A");
	printf("Digite o seu nome: ");
	gets(nome);
	system("cls"); 
	printf("Bem vindo %s\n",nome);

	system("pause");
	return 0;
}
