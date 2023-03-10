#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float cel, far;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &cel);

    far = cel * 1.8 + 32;

    printf("A temperatura em fahrenheit é: %.2f \n", far);
}