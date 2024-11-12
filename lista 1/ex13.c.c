/*
Leia uma distˆancia em quilˆometros e apresente-a convertida em milhas. A f´ormula de
convers˜ao ´e:
M =
K
1.61
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float M, K;

    printf("Digite uma distancia sendo em quilometros.\n");
    scanf("%f", &K);

    M = K  / 1.61;

    printf("A conversao em milhas e: %.2f\n", M);
    return 0;
}
