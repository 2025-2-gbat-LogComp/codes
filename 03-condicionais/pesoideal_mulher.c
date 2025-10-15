#include <stdio.h>

int main()  {
    float altura;
    float peso;

    printf ("Digite a sua altura (ex: 1.62): ");
    scanf("%f", &altura);
    peso = (62.1 * altura) - 44.7;
    
    printf ("Seu peso ideal eh: %.2f Kg.\n", peso); 
    return 0;
}
