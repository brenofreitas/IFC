#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf("Vamos calcular a �rea de um tri�ngulo \n");
    printf("Digite a base do tri�ngulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do tri�ngulo: \n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    printf("A �rea do tri�ngulo � de: \n %.2f", area);
	
	return 0;
}
