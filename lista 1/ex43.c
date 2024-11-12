/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3x sem juros;
• a comiss˜ao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
• a comiss˜ao do vendedor, no caso da venda ser parcelada (5% sobre o valor total).

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float V, VD, VP, CA, CP; //V = valor, VD = valor com desconto, VP = valor parcelado, CA = comissao a vista, CP = comissao parcelada.

  printf("De um valor:\n");
  scanf("%f", &V);
  printf("Valor = %.2f\n", V);

  VD = V - (V * 0.10);
  printf("Valor c/ desconto 10 porcento = %.2f\n", VD);

  VP = V / 3;
  printf("Valor parcelado 3x s/ juros = %.2f\n", VP);

  CA = VD * 0.05;
  printf("Comissao a vista de 5 porcento sobre valor c/ desconto = %.2f\n", CA);

  CP = V * 0.05;
  printf("Comissao parcelada de 5 porcento sobre o valor s/ desconto = %.2f\n", CP);
  return 0;
}
