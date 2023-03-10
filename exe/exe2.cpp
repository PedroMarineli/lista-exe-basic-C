#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float n;
    
    printf("Digite um número: ");
    scanf("%f", &n);
    printf("O número digitado foi: %f \n", n);
}