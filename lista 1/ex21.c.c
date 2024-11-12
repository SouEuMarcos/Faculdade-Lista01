/*
Leia um valor de massa em libras e apresente-o convertido em quilogramas. A f´ormula de
convers˜ao ´e:
K = L ∗ 0.45
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float K, L;

    printf("Digite um valor que sera dado em Libras:");
    scanf("%f", &L);

    K = L * 0.45;

    printf("A conversao para Quilogramas sera: %.2f\n", K);
    return 0;
}
