//Leia um valor em real e a cota¸c˜ao do d´olar. Em seguida, imprima o valor correspondente em d´olares.

#include <stdio.h>
#include <stdlib.h>

int main (){
    float R, D; // R = real, D = dolar.

    printf("Digite um valor em reais:");
    scanf("%f", &R);

    printf("A cotacao de 1 dolar atualmente (10/04/2023) = 5,07 reais\n");

    D = R / 5.07;

    printf("A conversao do valor em reais para dolar sera: %.2f\n", D);
    return 0;
}
