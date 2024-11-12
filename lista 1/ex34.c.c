/*Leia o valor do raio de um c´ırculo e imprima a ´area do c´ırculo correspondente. A ´area do
c´ırculo ´e π ∗ raio2
. Considere π = 3.141592.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float R, A, C;// R = raio, A = area, C = circulo.

    printf("Digite um valor para o raio do circulo.\n");
    scanf("%f", &R);

    A = 3.14 * (R * R);

    printf("area: %.2f\n", A);
    return 0;
}
