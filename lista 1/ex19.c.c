/*
Leia um valor de volume em litros e apresente-o convertido em metros c´ubicos (m3
). A
f´ormula de convers˜ao ´e:
M =
L
1000
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float L, M;

    printf("Digite um valor que vai ser dado em Litros:");
    scanf("%f", &L);

    M = L / 1000;

    printf("A conversao para Metros Cubicos sera: %.2f\n", M);
    return 0;
}
