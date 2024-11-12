/*
Leia um valor de comprimento em jardas e apresente-o convertido em metros. A f´ormula
de convers˜ao ´e:
M = 0.91 ∗ J
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float J, M;

    printf("Digite um valor de comprimento que sera dado em Jardas:");
    scanf("%f", &J);

    M = 0.91 * J;

    printf("A conversao do comprimento em Jardas para Metros sera: %.2f\n", M);
    return 0;
}
