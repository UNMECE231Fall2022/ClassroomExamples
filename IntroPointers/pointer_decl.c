#include <stdio.h>

int main() {
	int x = 5;
	float y = 42.0f;
	double z = 28794.1240;

	printf("x = %d, &x = %p\n", x, &x);
	printf("y = %f, &y = %p\n", y, &y);
	printf("z = %lf, &z = %p\n", z, &z);

	int* a = &x;
	float* b;
	b = &y;
	double *c;
	c = &z;

	printf("*a = %d, a = %p, &a = %p\n", *a, a, &a);
	printf("*b = %f, b = %p, &b = %p\n", *b, b, &b);
	printf("*c = %lf, c = %p, &c = %p\n", *c, c, &c);

	*a = 12;
	printf("x = %d\n", x);
	// double *c, *d;

	return 0;
}
