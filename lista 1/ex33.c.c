//Leia o tamanho do lado de um quadrado e imprima como resultado a sua ´area.

#include <stdlib.h>
#include <stdio.h>

int main(){
    float L, A;

    printf("De valor para um lado de um quadrado.\n");
    scanf("%f", &L);

    A = L * 4;

    printf("A area do quadrado sera: %.2f\n", A);
    return 0;
}
