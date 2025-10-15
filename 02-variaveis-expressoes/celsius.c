#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    printf ("Digite a temperatura em celsius: ");
    scanf ("%f", &celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf ("Em Fahrenheit é %.2f\n", fahrenheit);
 
    return 0;
}
