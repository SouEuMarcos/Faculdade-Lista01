/*
Leia um valor de comprimento em metros e apresente-o convertido em jardas. A f´ormula
de convers˜ao ´e:
J =
M
0.91

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float M, J;

    printf("Digite um valor de comprimento que sera dado em Metros:");
    scanf("%f", &M);

    J = M / 0.91;

    printf("A conversao do comprimento em Metros para Jardas sera: %.2f\n", J);
    return 0;
}
