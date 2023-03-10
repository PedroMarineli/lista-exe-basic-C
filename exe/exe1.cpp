#include <iostream>
#include <math.h>
#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("O número digitado foi: %d \n", n);

}