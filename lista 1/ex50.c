/*
Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int I, A, E;//Idade/Ano/Excesão caso não tenha feito aniversario ainda.

  printf("Digite sua idade: ");
  scanf("%d", &I);

  A = 2023 - I;
  E = (2023 - I) - 1;

  printf("Caso nao tenha feito aniversario: %d\nCaso tenha feito aniversario: %d\n", E, A);
  return 0;
}
