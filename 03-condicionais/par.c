#include <stdio.h>

int main() {
    int num;
    
    printf ("Digite um numero: ");
    scanf ("%d", &num);
    
    if (num%2 == 0) { 
        printf ("O numero eh par!!!\n");
        if (num > 10)
            printf ("e tambem maior que 10.\n");
    }
    
    printf ("Fim do programa!!!!\n");
}