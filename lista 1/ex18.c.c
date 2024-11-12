/*
Leia um valor de volume em metros c´ubicos m3
e apresente-o convertido em litros. A
f´ormula de convers˜ao ´e:
L = 1000 ∗ M
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float L, M;

    printf("Digite um valor que vai ser dado em Metros Cubicos:");
    scanf("%f", &M);

    L = 1000 * M;

    printf("A conversao para Litros sera: %.2f\n", L);
    return 0;
}
