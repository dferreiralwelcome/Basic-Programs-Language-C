#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

	setlocale(LC_ALL, "Portuguese"); 
	
	//vari�veis
	int n1, n2;
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%i", &n1);

	printf("Insira o segundo n�mero: \n");
	scanf("%i", &n2);

	if(n1==n2)
		printf("N�meros iguais!");

	else{

		if(n1>n2) 
			printf("O maior valor � = %i", n1);
		
		else
			printf("O maior valor � = %i", n2);
		
			printf("\n");
		
		}
		
	return 0;

}
