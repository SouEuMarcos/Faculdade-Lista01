/*
Leia um ˆangulo em radianos e apresente-o convertido em graus. A f´ormula de convers˜ao ´e:
G = R ∗
180
π
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float G, R;

    printf("Digite o valor de um angulo sendo em radiano.\n");
    scanf("%f", &R);

    G = R * 180 / 3.14;

    printf("A conversao para graus e: %.2f\n", G);
    return 0;
}
