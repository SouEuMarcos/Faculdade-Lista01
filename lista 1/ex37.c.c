/*
Fa¸ca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float P, D, R; // P = produto, D = desconto, R = resultado.

    printf("De um valor a um produto.\n");
    scanf("%f", &P);

    D = P * 0.12;
    printf("Desconto = %.2f\n", D);

    R = P - D;
    printf("O valor com desconto sera de: %.2f\n", R);
    return 0;
}
