#include <stdio.h>
#include <math.h>

int main() {
    float num;
    float raiz;

    printf ("Número para cálculo da raiz quadrada: ");
    scanf ("%f", &num);

    raiz = sqrt(num);
    printf ("A raiz de %.2f é %.2f\n", num, raiz);
    return 0;
}
