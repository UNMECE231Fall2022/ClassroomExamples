#include <stdio.h>
#include <stdlib.h>

int main() {
	// int* n = (int*) malloc(6 * sizeof(int));
	int* n = (int*) calloc(6, sizeof(int));

	n = (int*) realloc(n, 30 * sizeof(int));

	free(n);
	return 0;
}
