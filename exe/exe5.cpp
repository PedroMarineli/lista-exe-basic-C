#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float n, r;

    printf("Digite um número: ");
    scanf("%f", &n);

    r = n / 5;

    printf("A quinta parte do número digitado é: %.2f \n", r);
}