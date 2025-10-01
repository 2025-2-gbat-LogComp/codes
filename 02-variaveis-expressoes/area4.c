#include <stdio.h>

int main() {
   int   base;
   int   altura;
   float area;

   printf ("Esse programa calcula a area de um triangulo\n");
   printf ("Digite o valor da base: "); 
   scanf("%d", &base);
   printf ("Digite o valor da altura: "); 
   scanf("%d", &altura);
   area = (float) base * altura / 2;
   printf ("Area = %f\n", area);
   return 0;
}

