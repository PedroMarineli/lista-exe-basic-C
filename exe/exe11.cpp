#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float km, m;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &m);

    km = m * 3.6;

    printf("A velocidade em km/h é: %.2f \n", km);
}