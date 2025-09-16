#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//configurador de idioma
	
	setlocale(LC_ALL,"Portuguese");
	
	//muda a cor do texto
	system("color A");
	printf("Olá mundo \n");
	system("pause");
	//limpa a tela
	system("cls");
	printf("Good luck on the path\n");
	system("pause"); 
	return 0;
}
