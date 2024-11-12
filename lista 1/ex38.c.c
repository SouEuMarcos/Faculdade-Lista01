/*
Leia o sal´ario de um funcion´ario. Calcule e imprima o valor do novo sal´ario, sabendo que
ele recebeu um aumento de 25%
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float S, N, R; // S = salário, N = novo salário, R = resultado.

    printf("Digite um valor que sera dado com salario de um funcionario.\n");
    scanf("%f", &S);

    N = S * 0.25;

    R = S + N;

    printf("O novo salario com acrescimo de 25 porcento sera de: %.2f\n", R);
    return 0;
}
