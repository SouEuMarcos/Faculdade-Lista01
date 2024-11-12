/*
. Fa¸ca um programa que leia o valor da hora de trabalho (em reais) e o n´umero de horas
trabalhadas no mˆes. Imprima o valor a ser pago ao funcion´ario, adicionando 10% sobre o valor calculado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float H, HT, S, ADD; // H = horas de trabalho em reais, HT = horas trabalhadas no mes, S = salario, ADD = adicionando os 10%.

    printf("Digite um valor que sera dado como ganho por hora.\n");
    scanf("%f", &H);
    printf("Digite um valor que sera dado como horas trabalhadas no mes.\n");
    scanf("%f", &HT);

    S = H * HT;
    printf("Salario = %.2f\n", S);

    ADD = S * 0.10;
    printf("Acrescimo 10 porcento = %.2f\n", ADD);

    S = ADD + S;
    printf("O salario com acrescimo de 10 porcento sera: %.2f\n", S);
    return 0;
}
