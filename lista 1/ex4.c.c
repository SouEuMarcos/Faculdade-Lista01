/*
Leia um numero real e imprima o resultado do quadrado desse numero
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float a = 0;
    float quad;

    printf("Digite um numero real:\n");
    scanf("%f", &a);

    quad = a * a;

    printf("a raiz e: %2.f\n",quad);
    return 0;
}
