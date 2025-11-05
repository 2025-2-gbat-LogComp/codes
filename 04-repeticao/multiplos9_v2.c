// Fazer um programa que conta todos os múltiplos
// de 9 entre 1 e 100 

#include <stdio.h>

int main() {
	int n = 1;
	int cont9 = 0;
	
	while (n <= 100) {
		if (n%9 == 0)
			cont9 = cont9 + 1;
		n = n + 1;		
	}
	printf("Existem %d multiplos de 9 entre 1 e 100.\n", cont9);
	return 0;
}
