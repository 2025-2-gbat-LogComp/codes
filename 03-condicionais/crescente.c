#include <stdio.h>

int main() {
    int  num1;
    int  num2;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    printf ("Digite o segundo numero: ");
    scanf ("%d", &num2);

    if (num1 < num2)
       printf ("Os numeros sao: %d %d\n", num1, num2);
    else
       printf ("Os numeros sao: %d %d\n", num2, num1);

    return 0;
}
