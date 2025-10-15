#include <stdio.h>

int main() {
   int num;
   int soma;

   printf ("Digite um número: ");
   scanf ("%d", &num);

   soma = num/10 + num%10;

   printf ("A soma dos dígitos é: %d\n", soma);

   return 0;
}
