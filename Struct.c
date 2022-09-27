#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
//Definição da estrutura	
	struct aluno
	{
	
	
		char nome[50];
		char aula[50];
		int ufcd;
			
	};
	
//Declarar estrutura

	struct aluno curso;
	
	
//Iniciar os membros das variáveis da estrutura
	strcpy(curso.nome, "Daniel Ferreira");
	strcpy(curso.aula, "Programacao");
	curso.ufcd = 5412;
	
	printf("Nome: %s\n", curso.nome);
	printf("Aula: %s\n", curso.aula); 
	printf("Ufcd: %d\n", curso.ufcd);
	
	return 0;
	
}
