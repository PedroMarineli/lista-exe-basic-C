#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float m, k;

    printf("Digite a velocidade em quilômetros: ");
    scanf("%f", &k);

    m = k / 1.61;

    printf("A velocidade em milhas é: %.2f \n", m);
}