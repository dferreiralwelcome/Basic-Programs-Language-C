#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void){
  setlocale(LC_ALL, "Portuguese");
  int i;
  
  printf("Digite um n�mero: ");
  scanf("%i", &i);



 int soma = 0;
  for(int counter = 1; counter <= i; counter++) {
    soma += counter;
  }
  printf("A soma de todos os inteiros at� ao n�mero � %i.\n", soma);



 soma = 0;
  for(int counter = 2; counter <= i; counter += 2) {
    soma += counter;
  }
  printf("A soma de todos os pares at� ao n�mero � %i.\n", soma);



 int primo = 1;
  for(int counter = 2; counter < i; counter++) {
    if (i % counter == 0) {
      primo = 0;
      break;
    }
  }



 if (primo == 1) {
    printf("O n�mero � primo.");
  }
  else {
    printf("O n�mero n�o � primo.");
  }
  
  return 0;
}
