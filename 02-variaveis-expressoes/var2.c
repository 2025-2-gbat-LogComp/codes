#include <stdio.h>

int main() {
    int    idade   = 56;
    float  peso    = 75.6;
    char   nome[8] = "Galileu";

    // Para exibir um texto(char ...), use %s
    // Para exibir um inteiro(int), use %d
    // Para exibir um real(float), use %f
    
    printf ("Nome:  %s\n", nome);
    printf ("Idade: %d\n", idade);
    printf ("Nome:  %f\n", peso);
    return 0;
}
