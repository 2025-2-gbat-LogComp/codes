#include <stdio.h>

void situacao_aluno (int nota_1, int nota_2, int nota_3) {
	float media;
	
	media = (nota_1 + nota_2 + nota_3) / 3.0;
	
	if (media >= 6)
		printf ("APROVADO\n");
	else
		printf ("REPROVADO\n");
}

int main() {
	int n1, n2, n3;
	
	printf ("Digite a nota1: ");
	scanf ("%d", &n1);
	
	printf ("Digite a nota2: ");
	scanf ("%d", &n2);
	
	printf ("Digite a nota1: ");
	scanf ("%d", &n3);
	
	situacao_aluno(n1, n2, n3);
	return 0;
}
