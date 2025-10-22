#include <stdio.h>
#include <math.h>

int main() {
    float num1;
    float num2;
    float num3;
    float media;

    printf ("Número para a média: ");
    scanf ("%f", &num1);
    printf ("Número para a média: ");
    scanf ("%f", &num2);
    printf ("Número para a média: ");
    scanf ("%f", &num3);

    media = (num1 + num2 + num3) / 3; 
    printf ("A média dos números é %.2f\n", media);
    return 0;
}
