/*
A importˆancia de R$780.000,00 ser´a dividida entre trˆes ganhadores de um concurso. Sendo
que da quantia total:
• o primeiro ganhador receber´a 46% ;
• o segundo receber´a 32 % ;
• o terceiro receber´a o restante.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B, C;

    A = 780.000 * 0.46;
    B = 780.000 * 0.32;
    C = 780.000 * 0.22;

    printf("O primeiro ganhador recebera: %.2f\n", A);
    printf("O segundo ganhador recebera: %.2f\n", B);
    printf("O terceiro ganhador recebera: %.2f\n\n", C);
    return 0;
}
