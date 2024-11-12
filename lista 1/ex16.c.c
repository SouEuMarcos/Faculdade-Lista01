/*
. Leia um valor de comprimento em polegadas e apresente-o convertido em cent´ımetros. A
f´ormula de convers˜ao ´e:
C = P ∗ 2.54
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, P;

    printf("Digite o valor de um comprimento em Polegadas.\n");
    scanf("%f", &P);

        C = P * 2.54;

    printf("A conversao para centimetros e: %.2f\n", C);
    return 0;
}
