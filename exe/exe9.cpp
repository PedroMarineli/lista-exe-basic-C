#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float cel, kel;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &cel);

    kel = cel + 273.15;

    printf("A temperatura em kelvin é: %.2f \n", kel);
}