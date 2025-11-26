#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	int aleatorio;
	
	srand(time(NULL));   // Só deve ser chamada uma única vez
 	
	aleatorio = rand() % 4;
 	printf ("Numero escolhido foi %d\n", aleatorio);
 	
 	printf ("\033c");
 	return 0;
}
