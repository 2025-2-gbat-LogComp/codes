#include <stdio.h>

int quadrado(int n) {
	return n*n;
}

int main() 
{
   	int a;
   	int q;
   	
   	a = 5;
	q = quadrado(a);
    printf("%d**2 = %d\n", a, q);
   	
	return 0;
}

