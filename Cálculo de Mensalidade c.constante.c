#include <stdio.h>
#include <conio.h>

// declara��o da constante
#define tarifarioX 15;

int main(){
	
	float minutos, minutos_chamadas, mensalidade;
	
	printf("Minutos de chamada: ");
	scanf("%f", &minutos);
	
	minutos_chamadas = minutos * 0.12;
	mensalidade = minutos_chamadas + tarifarioX
	
	printf("Valor da mensalidade �: %.2f", mensalidade);
	
	getch();
	return 0;
}
