/*
Leia um n´umero inteiro de 4 d´ıgitos (de 1000 a 9999) e imprima 1 d´ıgito por linha.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int N, DU, DD, DT, DQ;// Digito 1, Digito 2, Digito 3, Digito 4.

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &N);

    DU = N / 1000;
    DD = (N % 1000) / 100;
    DT = (N % 100) / 10;
    DQ = N % 10;

    printf("Digito um = %d\nDigito dois = %d\nDigito tres = %d\nDigito quatro = %d\n", DU, DD, DT, DQ);
    return 0;
}
