#include <stioh.h>

int maior(int a, int b) {
	if (a > b)
	   return a;
	else
	   return b;
}

int main() {
	int x;
	int y;
	
	printf ("Digite um valor: ");
	scanf ("%d", &x);
	
	printf ("Digite um valor: ");
	scanf ("%d", &y);
	
	printf ("O maior eh: ", maior(x,y));
}
