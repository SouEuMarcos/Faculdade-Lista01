/*
Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas. A
f´ormula de convers˜ao ´e:
P =
C
2.54
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, P;

    printf("Digite o valor de um comprimento em Centimetros.\n");
    scanf("%f", &C);

        P = C / 2.54;

    printf("A conversao para Polegadas e: %.2f\n", C);
    return 0;
}
