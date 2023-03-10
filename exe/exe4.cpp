#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;


    printf("Digite um número: ");
    scanf("%f", &n1);

    n2 = pow(n1, 2);
    
    printf("O quadrado do número digitado é: %.2f \n", n2);
}
