/*
Leia um ˆangulo em graus e apresente-o convertido em radianos. A f´ormula de convers˜ao ´e:
R = G ∗
π
180
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float G, R;

    printf("Digite o valor de um angulo sendo em graus.\n");
    scanf("%f", &G);

    R = G * 3.14 / 180;

    printf("A conversao para radiano e: %.2f\n", R);
    return 0;
}
