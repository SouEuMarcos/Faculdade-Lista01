/*
Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
C = 5 ∗ (F − 32)/9
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float C, F;

    printf("Digite uma temperatura sendo em Fahrenheit.\n");
    scanf("%f", &F);

    C = 5 * (F - 32) / 9;

    printf("a temperatura em Celsius e: %2.f\n", C);
    return 0;
}
