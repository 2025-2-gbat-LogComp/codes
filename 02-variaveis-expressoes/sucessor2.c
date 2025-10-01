#include <stdio.h>

int main() {
    int numero;
    int sucessor;

    printf ("Digite um numero para gerar seu sucessor: ");
    scanf ("%d", &numero);
    sucessor = numero + 1;
    printf ("O sucessor de %d é: %d\n", numero, sucessor); 
    return 0;
}
