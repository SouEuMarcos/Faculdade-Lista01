/*
Leia um valor de ´area em acres e apresente-o convertido em metros quadrados m2
. A f´ormula
de convers˜ao ´e:
M = A ∗ 4048.58
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    float A, M;

    printf("Digite um valor de area que sera atribuido em acres:");
    scanf("%f", A);

    M = A * 4048.58;

    printf("A conversao de acres para m2 sera: %.2f\n", M);
    return 0;
}
