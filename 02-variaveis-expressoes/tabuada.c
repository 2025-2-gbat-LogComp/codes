#include <stdio.h>

int main() {
    int n;

    printf ("Qual o numero que voce quer a tabuada: ");
    scanf ("%d", &n);

    printf ("%d * %d = %d\n", n, 0, n*0);
    printf ("%d * %d = %d\n", n, 1, n*1);
    printf ("%d * %d = %d\n", n, 2, n*2);
    printf ("%d * %d = %d\n", n, 3, n*3);
    printf ("%d * %d = %d\n", n, 4, n*4);
    printf ("%d * %d = %d\n", n, 5, n*5);
    printf ("%d * %d = %d\n", n, 6, n*6);
    printf ("%d * %d = %d\n", n, 7, n*7);
    printf ("%d * %d = %d\n", n, 8, n*8);
    printf ("%d * %d = %d\n", n, 9, n*9);

    return 0;
}
