#include <stdio.h>
#include <stdlib.h> // biblioteca para variáveis
#include <locale.h> // biblioteca para idiomas


void main(){
    setlocale(LC_ALL, "Portuguese");
	
    float salario = 800.00;
    float comissao = 100.00;
    char valor = "a";
    
    int carrosVendidos;
    printf("Quantos carros foram vendidos? \n");
	scanf("%d", &carrosVendidos);
	printf("Número de carros vendidos é de: %d", carrosVendidos);
    int total = comissao * carrosVendidos + salario;
    int porcentagem = total * 5 / 100;
    int salarioFinal = total + porcentagem;
    printf("\n \n 5O valor do salário final é de: %d", salarioFinal);
    
    return 0;
}
