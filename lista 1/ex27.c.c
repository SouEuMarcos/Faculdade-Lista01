/*
Leia um valor de ´area em hectares e apresente-o convertido em metros quadrados m2
. A
f´ormula de convers˜ao ´e:

*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float H, M;

    printf("Digite um valor que sera dado em hectares:");
    scanf("%f", H);

    M = H * 10000;

    printf("A conversao de m2 para m2 sera: %.2f", M);
    return 0;
}