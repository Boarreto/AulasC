#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float somar (float num1, float num2){
	return num1 + num2;
}

float subtrair (float num1, float num2){
	return num1 - num2;
}

float multiplicar (float num1, float num2){
	return num1 * num2;
}

float dividir (float num1, float num2){
	return num1 / num2;
}

float calcularPorcentagem (float num1, float num2){
	return (num1 * num2) / 100;
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color A");
	
	int opcao;
	float num1,num2,resultado;
	
	printf("Calculadora\n");
	printf("-----------------------------------------------------\n");
	printf("Digite o valor do primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o valor do segundo numero: ");
	scanf("%f",&num2);
	printf("-----------------------------------------------------\n");
	system("pause");
	printf("1.Somar\n");
	printf("2.Subtrair\n");
	printf("3.Multiplicar\n");
	printf("4.Dividir\n");
	printf("5.Calcular porcentagem\n");
	printf("\n");
	printf("Digite a opção desejada: ");
	scanf("%d",&opcao);
	switch (opcao){
		case 1:
			resultado = somar(num1,num2);
			break;
		case 2:
			resultado = subtrair(num1,num2);
			break;
			
		case 3:
			resultado = multiplicar(num1,num2);
			break;		
			
		case 4:
			if(num2 == 0){
				printf("Nao e possivel dividir por 0\n");
			}else{
				resultado = dividir(num1,num2);
			}
			break;		
			
		case 5:
			resultado = calcularPorcentagem(num1,num2);
			break;
		default:
			printf("Opcao invalida\n");
			break;	
			
	}
	printf("-----------------------------------------------------\n");
	printf("Resultado %.2f\n",resultado);
	printf("\n");
	
	
	
	
	
	return 0;
}
