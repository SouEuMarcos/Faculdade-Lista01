/*
Fa¸ca um programa para converter uma letra mai´uscula em letra min´uscula. Use a tabela
ASCII para resolver o problema.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  char MAIUSCULA, MINUSCULA;

  printf("Digite uma letra maiuscula: ");
  scanf("%c", &MAIUSCULA);

  MINUSCULA = MAIUSCULA + 32;

  printf("letra minuscula = %c\n", MINUSCULA);
  return 0;
}
