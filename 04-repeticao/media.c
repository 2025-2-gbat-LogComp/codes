#include <stdio.h>

int main() {
	int x;
	int lidos = 0;
	float soma = 0;
	float media = 0;
	
	scanf ("%d", &x);
	while (x >= 0) {
		soma = soma + x;
		lidos = lidos + 1;
		scanf ("%d", &x);
	}
	
	media = soma / lidos;
	printf ("A media é %f\n", media);
	return 0;
}
