/*
Pe¸ca para o usu´ario para digitar trˆes valores inteiros e imprima a soma deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a = 0;
    int b = 0;
    int c = 0;
    int resultado;

    printf("Digite 3 valores consecutivamente.\n"); 
    scanf("%i %i %i",&a,&b,&c);
    
    resultado = a + b + c;

    printf("A soma dos tres valores e: %i\n",resultado);
    return 0;
}