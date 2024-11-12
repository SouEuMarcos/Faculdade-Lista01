/*
Leia um valor de ´area em metros quadrados m2
e apresente-o convertido em hectares. A
f´ormula de convers˜ao ´e:
H = M ∗ 0.0001
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float H, M;

    printf("Digite um valor que sera dado em m2:");
    scanf("%f", M);

    H = M * 0.0001;

    printf("A conversao de m2 para hectares sera: %.2f\n", H);
    return 0;
}
