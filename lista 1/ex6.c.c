/*
Leia uma temperatura em graus Celsius e apresenta-a convertida em graus Fahrenheit. A
f´ormula de convers˜ao ´e:
F = C ∗
9
5
+ 32
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float C, F;

    printf("Digite uma temperatura sendo em Celsius.\n");
    scanf("%f", &C);

    F = C * (9 / 5) + 32;

    printf("a temperatura em Fahrenheit e: %2.f\n", F);
    return 0;
}
