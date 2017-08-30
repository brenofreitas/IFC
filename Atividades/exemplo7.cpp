#include <stdio.h>
#include <stdlib.h>

int main(){
	float qntLatas, areaCilindro, altura, 
	diametro, qntCilindros, lata, L, mQuadrado, pi, raio;
	
	pi = 3.14;
	
	lata = 45.00;
	L = 5;
	mQuadrado = (3 * mQuadrado) * L;
	
	printf("Digite o valor do diametro do cilindro: \n");
	scanf("%f", &diametro);
	
	printf("Digite o valor da altura do cilindro: \n");
	scanf("%f", &altura);
	
	raio = diametro / 2;
	areaCilindro = 2 * pi * raio;
	
	qntLatas = areaCilindro * lata;
	printf("Area do cilindro é de: %.2f \n", areaCilindro);	
	printf("Qnt de latas é de: %.2f \n", qntLatas);
	
	return 0;
}

