#include <stdio.h>

int main() {
    int num1, num2;
    
    printf ("Digite o num1: ");
    scanf ("%d", &num1);
    
    printf ("Digite o num2: ");
    scanf ("%d", &num2);
    
    if (num1 < num2)
       printf ("Os números são: %d %d\n", num1, num2);
    
    if (num2 < num1)
       printf ("Os números são: %d %d\n", num2, num1);
    
    return 0;
}