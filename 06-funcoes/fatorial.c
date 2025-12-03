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
   
   	printf ("Digite um numero: ");
    scanf ("%d", &b);
	fat = fatorial(b);
    printf ("O fatorial de %d eh %d\n", b, fat);

   	return 0;
}

