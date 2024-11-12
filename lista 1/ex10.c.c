/*
Leia uma velocidade em km/h (quilˆometros por hora) e apresente-a convertida em m/s
(metros por segundo). A f´ormula de convers˜ao ´e:
M =
K
3.6
*/

int main(){
    float Km, Ms;

    printf("Digite uma velocidade em KM/H.\n");
    scanf("%f", &Km);

    Ms = Km / 3.6;

    printf("A conversao em metros por segundo seria: %.2f\n", Ms);
    return 0;
}
