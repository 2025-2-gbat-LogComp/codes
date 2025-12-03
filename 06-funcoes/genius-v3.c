#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int aleatorios[10];   // Array com cinco elementos aleatórios

int gera_numeros() {
	srand(time(NULL)); // A geração de números aleatórios exige esse comando.
	
	// Geracao de 10 números aleatórios
	for (i =0; i < 10; i++) {   		 	 // Repete o for 10 vezes		
		aleatorios[i] = rand() % 4;		 // Gera um número aleatório entre 0 e 3
										 // Guarda em um dos elementos de aleatorios
	}
}

int main() {
	int i;				 // Variável de uso em for
	int num;		     // Variável simples que lê o número digitado pelo usuário
	int acertos;		 // Variável simples que conta quantos numeros usuario acertou
	int nivel;

	gera_numeros();	
	// Interacao com o usuário em até 10 niveis
	for (nivel = 1; nivel <= 10; nivel++) {
		printf ("Voce esta no nivel %d\n", nivel);
		
		// Exibe os numeros/cores do nivel atual
		for (i =0; i < nivel; i++) {   		 	 
			if (aleatorios[i] == 0)
				printf ("%do. numero aleatorio 0 (AZUL)\n", i+1); // Exibe o elemento aleatorio		
			if (aleatorios[i] == 1)
				printf ("%do. numero aleatorio 1 (VERMELHO)\n", i+1); // Exibe o elemento aleatorio		
			if (aleatorios[i] == 2)
				printf ("%do. numero aleatorio 2 (VERDE)\n", i+1); // Exibe o elemento aleatorio		
			if (aleatorios[i] == 3)
				printf ("%do. numero aleatorio 3 (AMARELO)\n", i+1); // Exibe o elemento aleatorio		
			
			sleep(4);						 // Atrasa a execução em 1s
			printf ("\033c");				 // Limpar a tela
			system ("cls");			 		 // Limpar a tela
		}
		
		// Le os números do usuario e conta os acertos
		acertos = 0;
		for (i =0; i < nivel; i++) {   		 	 		
			printf ("Digite o numero: ");
			scanf ("%d", &num);
			if (num == aleatorios[i]) {
				printf ("ACERTOU!!!\n");
				acertos++;
			}
			else
				printf ("Errou!!!\n");
		}
		
		// Verifica a passagem de nível
		if (acertos == nivel) 
		    printf ("PARABENS, voce passou do nivel %d\n", nivel);
		else {
		    printf ("Reprovado no nivel %d. So acertou %d\n", nivel, acertos);
		    break;
		}
		
		sleep(4);						 // Atrasa a execução em 1s
		printf ("\033c");				 // Limpar a tela
		system ("cls");			 		 // Limpar a tela
	}
}
