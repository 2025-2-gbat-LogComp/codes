// Fazer um programa que mostra todos os múltiplos
// de 9 entre 1 e 100 

#include <stdio.h>

int main() {
	int n = 1;
	
	while (n <= 100) {
		if (n%9 == 0)
			printf ("%d\n", n);
		n = n + 1;		
	}
	return 0;
}
