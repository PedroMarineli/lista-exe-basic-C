#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float km, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &km);

    m = km / 3.6;

    printf("A velocidade em m/s é: %.2f \n", m);
}