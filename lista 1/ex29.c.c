//Leia quatro notas, calcule a m´edia aritm´etica e imprima o resultado.

#include <stdlib.h>
#include <stdio.h>

int main(){
    float A, B, C, D, Resultado;

    printf("De valor para 4 notas consecutivamente.\n");
    scanf("%f %f %f %f", &A, &B, &C, &D);

    Resultado = A + B + C + D / 4;

    printf("A media aritmetica sera: %.2f\n", Resultado);
    return 0;
}