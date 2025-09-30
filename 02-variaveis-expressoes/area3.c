#include <stdio.h>

int main() {
   int base;
   int altura;
   int area;

   printf ("Esse programa calcula a area de um triangulo\n");
   printf ("Digite o valor da base: "); 
   scanf("%d", &base);
   printf ("Digite o valor da altura: "); 
   scanf("%d", &altura);
   area = base * altura / 2;
   printf ("Area = %d\n", area);
   return 0;
}

