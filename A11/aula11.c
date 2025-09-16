#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color A");
	printf("Jogo do dado\n");
	srand(time(NULL));
	printf("Face: %d\n",rand()%6+1);
	
	
	system("pause");
	return 0;
}
