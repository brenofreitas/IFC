#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	
	printf("Digite o valor da media: ");
	scanf("%f", & media);
	
	if(media >= 7){
		printf("Aluno aprovado \n");	
	}
	
	if(media < 3){
		printf("Aluno reprovado \n");	
	}
	
	if(media < 7 && media >= 3){
		printf("Aluno em recuperação \n");	
	}
	
	return 0;
}
