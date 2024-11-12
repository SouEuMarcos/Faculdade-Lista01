/*
Leia uma distˆancia em milhas e apresente-a convertida em quilˆometros. A f´ormula de
convers˜ao ´e:
K = 1.61 ∗ M
*/

int main (){
    float M, K;

    printf("Digite uma distancia sendo em milhas.\n");
    scanf("%f", &M);

    K = 1.61 * M;

    printf("A conversao em quilometros e: %.2f\n", K);
    return 0;

}
