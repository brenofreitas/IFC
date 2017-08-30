#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float av1, av2, notaFinal;
	
	printf("Digite a nota da prova 1: \n");
	scanf("%f", & av1);
	
	printf("Digite a nota da prova 2: \n");
	scanf("%f", & av2);
		
	notaFinal = (av1 + av2) / 2;
	
	printf("A nota final do aluno é de: %f", notaFinal);
	
	return 0;
}
