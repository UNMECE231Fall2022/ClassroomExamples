#include <stdio.h>

struct thing {
	double x;
	float y;
	char z;
};

int main() {
	void* ptr;

	int a = 5;
	float b = 8.2f;
	double c = 74.2071;
	char d = 't';
	struct thing e = { 9.372, 3.1415f, 'k' };

	ptr = &a;
	//printf("a = %d\n", *((int*)ptr) );
	//printf("a as a float: %f\n", (float) a );

	ptr = &b;
	//printf("b = %f\n", *((float*)ptr));
	printf("b = %d\n", *((int*)ptr));

	ptr = &c;
	//printf("c = %lf\n", *((double*)ptr));

	ptr = &d;
	//printf("d = %c\n", *((char*)ptr));

	ptr = &e;
	printf("x = %lf, y = %f, z = %c\n",
		( *( (struct thing*) ptr) ).x,
		( *( (struct thing*) ptr) ).y,
		( *( (struct thing*) ptr) ).z
	);

	ptr = &a;

	return 0;
}
