#include <stdio.h>
#include <stdlib.h>

int main(){
	int variavel_1 = 1;
	float variavel_2 = 2.5;
	char variavel_3 = 'e';
	
	int nova;
	
	printf("printf serve para imprimir alguma coisa na tela \n");
	printf("Agora digite um valor para a variavel nova \n");
	scanf("%d", &nova);
	printf("A variavel nova tem o valor de: %d %c", nova, variavel_3);
	
	return 0;
}
