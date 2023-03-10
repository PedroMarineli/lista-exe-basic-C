#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float cel, kel;

    printf("Digite a temperatura em kel: ");
    scanf("%f", &kel);

    cel = kel - 273.15;

    printf("A temperatura em celsius é: %.2f \n", cel);
}