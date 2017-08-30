#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float base, potencia, valor;
    int exp;
    
    float el;

    printf("Digite um valor: ");
    scanf("%f", &valor);
    
    el = 5*5;
    
    float elevado;

	elevado = pow(5.6, 50);
	
	printf("Eleve o número 5.6 a 500 potência : %f", elevado);
    printf("O valor de pow é de %f", el);

    printf("A resposta Ã©: %f \n", sqrt(valor)); // sqrt raiz quadrada;

    system("pause");
	return 0;
}
