//Leia um n´umero inteiro e imprima a soma do sucessor do seu triplo com o antecessor do seu dobro.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int I, S, A, R; //I = inteiro, S = sucessor, A = antecessor, R = resultado.

    printf("Digite um numero inteiro.\n");
    scanf("%i", &I);

    S = I + 1;
    printf("Sucessor = %i\n", S);

    A = I - 1;
    printf("Antecessor = %i\n", A);

    R = (S * 3) + (A * 2);
    printf("Resultado (soma do sucessor do seu tripo com antecessor do seu dobro): %i\n", R);
    return 0;
}
