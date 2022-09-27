#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void){
  setlocale(LC_ALL, "Portuguese");
  int i;
  
  printf("Digite um número: ");
  scanf("%i", &i);



 int soma = 0;
  for(int counter = 1; counter <= i; counter++) {
    soma += counter;
  }
  printf("A soma de todos os inteiros até ao número é %i.\n", soma);



 soma = 0;
  for(int counter = 2; counter <= i; counter += 2) {
    soma += counter;
  }
  printf("A soma de todos os pares até ao número é %i.\n", soma);



 int primo = 1;
  for(int counter = 2; counter < i; counter++) {
    if (i % counter == 0) {
      primo = 0;
      break;
    }
  }



 if (primo == 1) {
    printf("O número é primo.");
  }
  else {
    printf("O número não é primo.");
  }
  
  return 0;
}
