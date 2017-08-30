#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float mlCaixa, volume, aBase, raio, pi, altura, diametro;
    float metro, litros, ml;

    pi = 3.14;
	
	// calculando o raio
	printf("Digite o valor do raio: \n");
	scanf("%f", &diametro );
	raio = diametro / 2;
	printf("O raio é: %f \n \n", raio);
    
    // pegando a altura
    printf("Digite o valor da ALTURA da caixa d'água: \n");
    scanf("%f", &altura);
    printf("Altura é: %f \n \n", altura);
    
    // calculando a área da base
    aBase = pi * raio * raio; 
    printf("Área da base é: %f \n \n", aBase);
    
    // calculando o volume, e multiplica por 1000 para dar o valor em ml
    volume = (aBase * altura) * 1000 * 1000;  
    printf("Volume é: %.2f", volume);
        
    return 0;
}
