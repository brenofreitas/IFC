#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float tempo, vm, kmL, distancia, consumo;
	kmL = 15; // 15km por litro
	
	printf("Quantos KM, tem a sua viagem? \n");
	scanf("%f", & distancia);
	
	printf("Quanto tempo em 0h.00min, tem a sua viagem? \n");
	scanf("%f", & tempo);
	
	vm = distancia / tempo;
	consumo = vm / kmL;
	
	printf("Consumo e de: %.2f", consumo);
	printf("litros \n \n");
	printf("A uma velocidade media de de %.2f", vm);
	printf(" Km/h");
				
	return 0;
}
