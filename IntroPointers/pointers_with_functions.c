#include <stdio.h>

void swap_local(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap_ptr(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 7, b = 9;
	printf("a = %d, b = %d\n", a, b);
	swap_local(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap_ptr(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
