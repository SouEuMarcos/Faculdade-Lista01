/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A f´ormula
de convers˜ao ´e:
K = C + 273.15
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float C, K;

    printf("Digite uma temperatura sendo em Celsius.\n");
    scanf("%f", &C);

    K = C + 273.15;

    printf("a temperatura em Kelvin e: %.2f\n", K);
    return 0;
}
