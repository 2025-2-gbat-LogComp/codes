#include <stdio.h>

int proximo(int n) {
	return n+1;
}

int main() 
{
   	int prox;
	int b;
   
   	printf ("Digite um numero: ");
    scanf ("%d", &b);
	prox = proximo(b);
    printf ("O proximo de %d  eh %d\n", b, prox);

   	return 0;
}

