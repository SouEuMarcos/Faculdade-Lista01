/*
Sejam a e b os catetos de um triˆangulo, onde a hipotenusa ´e obtida pela equa¸c˜ao:
hip =
p
a
2 + b
2
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B, H, QUAD;// H = hipotenusa.

    printf ("De valores para A e B consecutivamente.\n");
    scanf("%f %f", &A, &B);

    QUAD = (A * A) + (B * B);
    H = QUAD * QUAD;

    printf("A hipotenusa sera: %.2f\n", H);
    return 0;
}