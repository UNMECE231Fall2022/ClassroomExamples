#include <stdio.h>
#include <stdlib.h>

int main() { 
	// int y[][3] = {
	int y[2][3] = {
		{ 2, 4, 6 },
		{ 1, 3, 5 }
	};

	int* z = (int*) malloc(2 * sizeof(int));

	int i;
	int x_rows = 2;
	int x_cols = 3;
	int** x = (int**) malloc(x_rows * sizeof(int*));
	for (i=0; i<x_rows; i++) {
		// *(x + i ) === x[i]
		x[i] = (int*) malloc(x_cols * sizeof(int));
	}

	x[0][0] = 2;
	x[0][1] = 4;
	x[0][2] = 6;
	x[1][0] = 1;
	x[1][1] = 3;
	x[1][2] = 5;

	int j;
	for (i=0; i<x_rows; i++) {
		for (j=0; j<x_cols; j++) {
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}

	for (i=0; i<x_rows; i++) {
		for (j=0; j<x_cols; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}

	for (i=0; i<x_rows; i++) {
		free(x[i]);
	}
	free(x);
	free(z);
	return 0;
}
