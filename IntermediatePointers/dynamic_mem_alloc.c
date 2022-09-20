#include <stdio.h>
#include <stdlib.h>

struct _thing {
	double x;
	float y;
	char z;
};

struct _stuff {
	double q;
	int a;
	float y;
};

typedef struct _stuff Stuff;

int main() {
	double* x = (double*) malloc(7 * sizeof(double));
	double y[7];

	int i;
	for (i=0; i<7; i++) {
		x[i] = (i+1) * (i*2);
	}
	for (i=0; i<7; i++) {
		printf("x[%d] = %lf\n", i, *(x + i) );
	}
	free(x);

	Stuff* z = (Stuff*) malloc(12 * sizeof(Stuff));
	z[0].q = 6.5;
	z[0].a = 5;
	z[0].y = 7.8f;

	(* (z + 1) ).q = 12.4;

	free(z);

	return 0;
}
