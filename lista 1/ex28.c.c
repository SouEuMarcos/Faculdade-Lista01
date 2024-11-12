//Fa¸ca a leitura de trˆes valores e apresente como resultado a soma dos quadrados dos trˆes valores lidos.

#include <stdlib.h>
#include <stdio.h>

int main(){
    float A, B, C, quadrado;

    printf("Digite 3 valores consecutivamente.\n");
    scanf("%f %f %f",&A,&B,&C);
    printf(" Valor A: %.2f\n Valor B: %.2f\n Valor C: %.2f\n", A, B, C);

    quadrado = (A*A) + (B*B) + (C*C);

    printf("A soma do quadrado dos tres valores sera: %.2f\n", quadrado);
    return 0;
}
