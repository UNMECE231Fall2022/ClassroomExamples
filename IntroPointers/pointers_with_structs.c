#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

// Complex add_complex_values(Complex* x, Complex* y);
void add_complex(const Complex* x, const Complex* y, Complex* z) {
	z->real = x->real + y->real;
	z->imag = x->imag + y->imag;
}

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

	Complex t;
	add_complex(&a, &b, &t);
	print_complex(&t);

	return 0;
}
