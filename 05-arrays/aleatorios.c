#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	int aleatorios[5];   // Isso cria um array com cinco elementos int
	int i;				 // Isso é uma variável int simples
	
	srand(time(NULL)); // A geração de números aleatórios exige esse comando.
	
	// Geracao e exibição de 5 números aleatórios
	for (i =0; i < 5; i++) {   		 	 // Repete o for 5 vezes		
		aleatorios[i] = rand() % 4;		 // Gera um número aleatório entre 0 e 3
										 // Guarda em um dos elementos de aleatorios
	}

	for (i =0; i < 5; i++) {   		 	 // Repete o for 5 vezes		
		printf ("%d \n", aleatorios[i]); // Exibe o elemento aleatorio		
		sleep(1);						 // Atrasa a execução em 1s

		printf ("\033c");				 // Limpar a tela
		system ("cls");			 		 // Limpar a tela
	}
	
	
}
