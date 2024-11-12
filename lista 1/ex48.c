/*
Leia um valor inteiro em segundos, e imprima-os em horas, minutos e segundos.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int S, H, M;

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &S);

    H = S / 3600;
    S = S % 3600;
    M = S / 60;

    printf("Horas: %d\nMinutos: %d\nSegundos: %d\n", H, M, S);
    return 0;
}
