//Leia um n´umero inteiro e imprima o seu antecessor e o seu sucessor

#include <stdio.h>
#include <stdlib.h>

int main(){
    int I, A, S; // I = inteiro, A = antecessor, S = sucessor.

    printf("Digite um numero inteiro.\n");
    scanf("%i", &I);

    A = I - 1;
    S = I + 1;

    printf("sucessor: %i\n", S);
    printf("antecessor: %i\n", A);
    return 0;
}
