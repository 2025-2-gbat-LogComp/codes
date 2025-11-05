// Fazer um programa que conta todos os múltiplos
// de 9 entre 1 e um limite digitado pelo usuário 

#include <stdio.h>

int main() {
	int n = 1;
	int cont9 = 0;
	int limite;
	
	printf ("Quer contar os multiplos de 9 até quanto: ");
	scanf("%d", &limite);
	
	while (n <= limite) {
		if (n%9 == 0)
			cont9 = cont9 + 1;
		n = n + 1;		
	}
	printf("Existem %d multiplos de 9 entre 1 e %d.\n", cont9, limite);
	return 0;
}
