/*
Leia um n´umero real e imprima a quinta parte deste n´umero.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float a, resultado;

    printf("Digite um numero real.\n");
    scanf("%f", &a);

    resultado = a / 5;

    printf("A quinta parte desse numera e: %.2f\n", resultado);
    return 0;
}
