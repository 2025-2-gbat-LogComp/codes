#include <stdio.h>

int fatorial(int n) {
	int fat = 1;
	int i;
	
	for (i = 1; i <= n; i++)
	    fat = fat * i;
	return fat;
}

int main() 
{
   	int fat;
	int b;
	int i;
   
   	printf ("Digite um numero: ");
    scanf ("%d", &b);
	for (i = 1; i <= b; i++)
	    printf ("O fatorial de %d eh %d\n", i, fatorial(i));

   	return 0;
}

