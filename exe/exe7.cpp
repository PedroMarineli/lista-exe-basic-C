#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float cel, far;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &far);

    cel = 5.0 * (far - 32) / 9.0;

    printf("A temperatura em celsius é: %.2f \n", cel);
}