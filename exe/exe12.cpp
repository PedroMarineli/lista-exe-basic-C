#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float m, k;

    printf("Digite a velocidade em milhas: ");
    scanf("%f", &m);

    k = 1.61 * m;

    printf("A velocidade em quilômetros é: %.2f \n", k);
}