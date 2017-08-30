#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf("Vamos calcular a Área de um triângulo \n");
    printf("Digite a base do triângulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: \n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    printf("A área do triângulo é de: \n %.2f", area);
	
	return 0;
}
