/*
Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A f´ormula
de convers˜ao ´e:
C = K − 273.15
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float C, K;

    printf("Digite uma temperatura sendo em Kelvin.\n");
    scanf("%f", &K);

    C = K - 273.15;

    printf("a temperatura em Celsius e: %.2f\n", C);
    return 0;
}
