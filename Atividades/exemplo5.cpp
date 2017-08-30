#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b,c,d,e,f;
	float x, y;
	
	c = a * x + b * y;
	f = d * x + e * y;
	
	printf("Informe o valor de a: \n");
	scanf("%f", & a);
	
	printf("Informe o valor de b: \n");
	scanf("%f", & b);
	
	printf("Informe o valor de c: \n");
	scanf("%f", & c);
	
	printf("Informe o valor de d: \n");
	scanf("%f", & d);
	
	printf("Informe o valor de e: \n");
	scanf("%f", & e);
	
	printf("Informe o valor de f: \n");
	scanf("%f", & f);
	
	x = (c * e) - (b * f) / (a * e) - (b * d);
	y = (a * f) - (c * d) / (a * e) - (b * d);
	
	printf("O valor de x é: %f \n", x);
	printf("O valor de y é: %f \n", y);
	
	
	return 0;
}
