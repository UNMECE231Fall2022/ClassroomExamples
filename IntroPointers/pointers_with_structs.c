#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void add_complex(Complex* x, Complex* y, Complex* z);

void print_complex(const Complex* x) {
	//printf("%lf ", (*x).real);
	printf("%lf ", x->real);
	if ((*x).imag < 0) {
		//printf("- %lfj\n", -(*x).imag);
		printf("- %lfj\n", -x->imag);
	}
	else {
		printf("+ %lfj\n", x->imag);
	}
}

int main() {
	Complex a = {3, 4};
	Complex b = {1, -2};
	Complex* z = &b;

	print_complex(&a);
	print_complex(z);

	return 0;
}
