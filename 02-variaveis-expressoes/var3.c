#include <stdio.h>
#include <string.h>

int main() {
    int    idade;
    float  peso;
    char   nome[8];

    idade = 2025 - 2008;
    peso  = 59;
    strcpy (nome, "Maria");

    // Para exibir um texto(char ...), use %s
    // Para exibir um inteiro(int), use %d
    // Para exibir um real(float), use %f
    
    printf ("Nome:  %s\n", nome);
    printf ("Idade: %d\n", idade);
    printf ("Nome:  %f\n", peso);
    return 0;
}
