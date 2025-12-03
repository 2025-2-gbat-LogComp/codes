#include <stdio.h>

int main() 
{
   	int fat;
	int b;
	int i;
   
   	printf ("Digite um numero: ");
    scanf ("%d", &b);
	for (i = 1; i <= b; i++) {
		fat = 1;
		for (j=1; j <= i; j++)
		    fat = fat * j;
	    printf ("O fatorial de %d eh %d\n", i, fat);
	}
   	return 0;
}

