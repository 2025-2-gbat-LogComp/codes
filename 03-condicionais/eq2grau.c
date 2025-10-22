#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf ("Digite o valor do coeficiente a: ");
    scanf ("%f", &a);
    printf ("Digite o valor do coeficiente b: ");
    scanf ("%f", &b);
    printf ("Digite o valor do coeficiente c: ");
    scanf ("%f", &c);

    if (a != 0) {
       delta = pow(b, 2) - 4*a*c;
       if (delta >= 0) {
          x1 = (-b + sqrt(delta)) / (2 * a);
          x2 = (-b - sqrt(delta)) / (2 * a);
          printf ("As raizes são %.2f e %.2f\n", x1, x2);
       }
       else {
          printf ("Nao existem raizes\n");
       }
    }
    else {
       printf ("o valor de a não pode ser zero\n");
    }

    return 0;
}
