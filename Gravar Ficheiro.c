#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	//criar variável para o ficheiro
	FILE *pont_arq; 
	
	char frase[50];
		
	// abrir ficheiro
	pont_arq = fopen("teste_aula.txt", "w");
	
	//testa se o fich foi criado
	
	if(pont_arq == NULL){
				
	printf("Erro de abertura");
	return 1;
	}
	
	printf("Escreva alguma coisa: ");
	gets (frase);
		
	// Usar fprintf para armazenar a string no ficheiro
	
	fprintf(pont_arq, "%s", frase);
	
	//usa o fclose para fechar o ficheiro
	
	fclose(pont_arq);
	
	printf("Dados gravados!");
	
	getch();
	return 0;
	
}
