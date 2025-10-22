#include <stdio.h>
#include <math.h>

int main() {
    float num;
    float soma;
    float media;

    soma = 0;

    printf ("Número para a média: ");
    scanf ("%f", &num);
    soma = soma + num;

    printf ("Número para a média: ");
    scanf ("%f", &num);
    soma = soma + num;

    printf ("Número para a média: ");
    scanf ("%f", &num);
    soma = soma + num;

    media = soma / 3; 
    printf ("A média dos números é %.2f\n", media);
    return 0;
}
