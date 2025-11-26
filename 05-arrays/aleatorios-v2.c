#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	int aleatorios[5];   // Isso cria um array com cinco elementos int
	int i;				 // Isso é uma variável int simples
	int num;				 // Isso é uma variável int simples
	
	srand(time(NULL)); // A geração de números aleatórios exige esse comando.
	
	// Geracao e exibição de 5 números aleatórios
	for (i =0; i < 5; i++) {   		 	 // Repete o for 5 vezes		
		aleatorios[i] = rand() % 4;		 // Gera um número aleatório entre 0 e 3
										 // Guarda em um dos elementos de aleatorios
	}

	// Exibe o que foi gerado
	for (i =0; i < 5; i++) {   		 	 // Repete o for 5 vezes		
		if (aleatorios[i] == 0)
			printf ("%do. numero aleatorio 0 (AZUL)\n", i+1); // Exibe o elemento aleatorio		
		if (aleatorios[i] == 1)
			printf ("%do. numero aleatorio 1 (VERMELHO)\n", i+1); // Exibe o elemento aleatorio		
		if (aleatorios[i] == 2)
			printf ("%do. numero aleatorio 2 (VERDE)\n", i+1); // Exibe o elemento aleatorio		
		if (aleatorios[i] == 3)
			printf ("%do. numero aleatorio 3 (AMARELO)\n", i+1); // Exibe o elemento aleatorio		
		
		sleep(3);						 // Atrasa a execução em 1s
		printf ("\033c");				 // Limpar a tela
		system ("cls");			 		 // Limpar a tela
	}
	
	for (i =0; i < 5; i++) {   		 	 // Repete o for 5 vezes		
		printf ("Digite o número: ");
		scanf ("%d", &num);
		if (num == aleatorios[i])
			printf ("ACERTOU!!!\n");
		else
			printf ("Errou!!!\n");
	}
}
