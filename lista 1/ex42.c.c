/*
Receba o sal´ario-base de um funcion´ario. Calcule e imprima o sal´ario a receber, sabendo-se
que esse funcion´ario tem uma gratifica¸c˜ao de 5% sobre o sal´ario-base. Al´em disso, ele paga 7% de imposto
sobre o sal´ario-base.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float SB, G, I, R; // SB = salario base, G = gratificação, I = imposto, R = resultado.

    printf("De um valor que sera o salario-base de um funcionario.\n");
    scanf("%f", &SB);

    G = SB * 0.05;
    printf("Gratificacao 5 porcento = %.2f\n", G);

    SB = SB + G;
    printf("Seu salario com gratificaaoo de 5 porcento sera:%.2f\n", SB);

    I = SB * 0.07;
    printf("Desconto de 7 porcento = %.2f\n", I);

    R = SB - I;
    printf("Seu salario com desconto de 7 porcento de imposto sera:%.2f\n", R);
    return 0;
}
