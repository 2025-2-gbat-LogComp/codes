#include <stdio.h>

int soma_divisores(int n) {
	int soma = 0;
	int div = 1;
	while (div < n) {
		if (n%div == 0)
			soma = soma + div;
		div++;
	}
	
	return soma;
}

int sao_amigos(int a, int b) {
	if ((soma_divisores(a) == b)  &&  (soma_divisores(b) == a))
		return 1;
	else
		return 0;
}

int main() {
	int i, j;
	
	for (i = 1; i <= 10000; i++)
		for (j = i+1; j <= 10000; j++)
			if (sao_amigos(i, j) == 1)
				printf ("%d %d sao amigos.\n", i, j);
}
