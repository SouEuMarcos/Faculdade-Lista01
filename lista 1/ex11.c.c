/*
Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilˆometros por hora). A f´ormula de convers˜ao ´e:
K = M ∗ 3.6
*/

int main(){
    float Km, Ms;

    printf("Digite uma velocidade em KM/H.\n");
    scanf("%f", &Ms);

    Km = Ms * 3.6;

    printf("A conversao em metros por segundo seria: %.2f\n", Km);
    return 0;
}
