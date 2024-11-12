/*
Fa¸ca um programa que leia um n´umero inteiro positivo de trˆes d´ıgitos (de 100 a 999). Gere
outro n´umero formado pelos d´ıgitos invertidos do n´umero lido. Exemplo: n´umero lido = 123, n´umero gerado
= 321.

*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int A, P, S, T;// Primeiro/Segundo/Terceiro.

  printf("Digite numeros inteiros de 3 digitos: ");
  scanf("%d", &A);

  P = A % 10;
  S = (A / 10) % 10;
  T = A / 100;

  printf("O primeiro: %d\nO segundo: %d\nO terceiro: %d\n", P, S, T);
  return 0;
}
