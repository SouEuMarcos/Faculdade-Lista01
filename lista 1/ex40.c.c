/*
Uma empresa contrata um encanador a R$30,00 por dia. Fa¸ca um programa que solicite o
n´umero de dias trabalhados pelo encanador e imprima a quantia l´ıquida que dever´a ser paga, sabendo-se
que s˜ao descontados 8% para imposto de renda.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float D, E = 30, S, I, R; //D = Dias trabalhados, E = Encanador (=30), S = Salario, I = imposto, R = resultado

    printf("De um valor que sera dado como dias trabalhados.\n");
    scanf("%f", &D);

    S = E * D;
    printf("Salario liquido = %.2f\n", S);

    I = S * 0.08;
    printf("Imposto = %.2f\n", I);

    R = S - I;
    printf("Sera descontado 8 porcento dos dias trabalhados, a diaria sera: %.2f\n", R);
    return 0;
}
