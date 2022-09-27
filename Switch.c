#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int presidente;
	
	printf("Eleição para a Presidência da República:\n 1 - Marcelo Rebello\n 2 - André Ventura\n 3 - Marisa Isabel\n 4 - Ana Maria Rosa\n");
	scanf("%d", &presidente);
	
	switch(presidente){
		
		case 1:
			printf("Marcelo Rebello");
			break;
			
		case 2:
			printf("André Ventura");
			break;
			
		case 3:
			printf("Marisa Isabel");
			break;
			
		case 4:
			printf("Ana Maria Rosa");
			break;
			
		default:
			printf("\nEsta opção não existe.");
			
			}
}
