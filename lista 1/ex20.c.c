/*
Leia um valor de massa em quilogramas e apresente-o convertido em libras. A f´ormula de
convers˜ao ´e:
L =
K
0.45
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float K, L;

    printf("Digite um valor que sera dado em Quilogramas:");
    scanf("%f", &K);

    L = K / 0.45;

    printf("A conversao para Libras sera: %.2f\n", L);
    return 0;
}
