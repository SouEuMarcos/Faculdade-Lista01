/*
Leia um valor de ´area em metros quadrados m2
e apresente-o convertido em acres. A f´ormula
de convers˜ao ´e:
A = M ∗ 0.000247
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float A, M;

    printf("Digite um valor de area que sera atribuido em metros quadrados:");
    scanf("%f", M);

    A = M * 0.000247;

    printf("A conversao de metros quadrados para acres sera: %.2f\n", A);
    return 0;
}
