#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int numero,resposta;
int contador=0;


int main(int argc, char *argv[]) {
	do{
	system("color A");
	printf("Tabuada\n\n");
	printf("Digite o numero da tabuada: ");
	scanf("%d",&numero);
	
	for(contador = 0;contador<=10;contador++){
		printf("%d X %d = %d\n",numero,contador,numero*contador);
		
	}
	if(resposta>2){
		printf("Digite uma opcao valida\n");
	}else{
		printf("\n1- Novo calculo");
		printf("\n2- Sair\n");
		printf("Digite a opcao desejada: ");
		scanf("%d",&resposta);
		
	}
	
}while(resposta != 2);
	
	system("pause");
	return 0;
}
