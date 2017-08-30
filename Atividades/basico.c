#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int casa;
	float comprimento, calculo;
	
	printf("Quantas casas tem na sua rua? \n");
	
	scanf("%d", & casa);
	
	printf("Qual o comprimento de cada casa? \n");
	
	scanf("%f", & comprimento);
	
	calculo = comprimento * casa;
	
	printf("O comprimento de cada casa é de: %f \n", comprimento);
	printf("O número de casas na sua rua é de: %d \n", casa);
	printf("O calculo é: %f", calculo);
	
	return 0;
}
