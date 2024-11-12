/*
. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular ´e calculado por meio da seguinte f´ormula:
V = π ∗ raio2
∗ altura (24)
onde π = 3.141592.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, R, V;

    printf("De valores para a altura e o raio de um cilindro circular.\nAltura:");
    scanf("%f", &A);
    printf("Raio:\n");
    scanf("%f", &R);

    V = 3.14 * (R * R) * A;

    printf("O volume do cilindro sera: %.2f\n", V);
    return 0;
}
