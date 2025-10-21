#include <stdio.h>

int main()  {
    float altura;
    float peso;
    char  sexo;

    printf ("Qual o seu sexo (m para masculino / f para feminino): ");
    scanf ("%c", &sexo);
    printf ("Digite a sua altura (ex: 1.62): ");
    scanf("%f", &altura);

    if (sexo == 'f')
       peso = (62.1 * altura) - 44.7;
    else
       peso = (72.7 * altura) - 58;

    printf ("Seu peso ideal eh: %.2f Kg.\n", peso); 
    return 0;
}
