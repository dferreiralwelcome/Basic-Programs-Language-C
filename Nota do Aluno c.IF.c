//Nota do aluno
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	float notafinal, frequencia;
	
	printf("Insira a nota final do aluno: ");
	scanf("%f", &notafinal);
	
	printf("Insira a frequencia ");
	scanf("%f", &notafinal);
	
	if(notafinal >= 9,5 && frequencia > 40,5) {
		printf("Aprovado!");
	}
	else{
	
		printf("Reprovado!");
	}
	return;
}
