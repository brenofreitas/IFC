#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade, cont = 0;
	float salario, media;
	char sexo;

	do{
			
			printf("\n \t ==================================== \n");
			
			printf("\n \n Digite a IDADE do habitante: %d \n", cont);
			scanf("\n %d", & idade);
			
			printf("\n Digite o SALARIO do habitante: %d \n", cont);
			scanf("\n %f", & salario);
			
			printf("\n Digite o SEXO do habitante: %d \n", cont);
			scanf("\n %c", & sexo);	
		
		if(idade > 0 && idade <= 120){
			printf("\n \t ==================================== \n");
			
			printf("\n A IDADE foi: %d", idade);
			printf(" anos. \n");
			
			if(salario > 0){
				printf("\n O SALARIO: R$ %.2f", salario);
				printf("\n\n");
				
				if(sexo == 'm'){
					printf(" O sexo: masculino");
				}
				
				if(sexo == 'f'){
					printf(" O sexo: feminino");
				} 
				
				if(sexo != 'm' && sexo != 'f') {
					printf("\n Erro: Digite o sexo correto: M ou F");
				}
				
				if(sexo = true){
					cont++;
				}
				
			} else{
				printf("\n Erro: Digite um salário maior que 0.00");
			}
		} else {
			printf("\n Erro: Digite um IDADE entre 1 e 120 \n");
		}
			 
	} while (cont < 3);
	
	printf("\n \n \n");
	system("pause");
	return 1;
}
