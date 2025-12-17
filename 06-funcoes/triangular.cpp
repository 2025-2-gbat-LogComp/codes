#include <stdio.h>

int triangular(int n) {
	return n*(n +1)/2;
}

int main() {
	int i;

	for (i=1; i <= 100; i++)
	    printf ("%d\n", triangular(i));
	return 0;
}
