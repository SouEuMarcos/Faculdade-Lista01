/*
Receba a altura do degrau de uma escada e a altura que o usu´ario deseja alcan¸car subindo
a escada. Calcule e mostre quantos degraus o usu´ario dever´a subir para atingir seu objetivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float  AD, AA, R; // AD = altura do degrau, AA = altura a alcançar, R = reultado.

  printf("Altura do degrau:\nAltura a alcancar:\n");
  scanf("%f %f", &AD, &AA);
  printf("Altura do degrau = %.2f\nAltura a alcancar = %.2f\n", AD, AA);

  R = AA / AD;
  printf("Devera subir %.2f degraus.\n", R);
  return 0;
}
