#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "Portuguese"); 
	
	//variáveis
	int n1, n2;
	
	printf("Insira o primeiro número:\n");
	scanf("%i", &n1);

	printf("Insira o segundo número: \n");
	scanf("%i", &n2);

	if(n1==n2)
		printf("Números iguais!");

	else{

		if(n1>n2) 
			printf("O maior valor é = %i", n1);
		
		else
			printf("O maior valor é = %i", n2);
		
			printf("\n");
		
		}
		
	return 0;

}
