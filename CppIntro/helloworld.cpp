#include <iostream>

void swap(int& x, int& y) {
	int t = x;
	x = y;
	y = t;
}

void swap(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}

int main() {
	std::cout << "Hello world!" << std::endl;

	int my_age = 26;
	int two = 2;
	int six = 6;
	std::cout << "My age is " << my_age << '\n';
	std::cout << "My age is " << two << six << '\n';

	//int& two_ref = two;
//	swap_ptr(&two, &six);
//	swap_ref(two, six);
	swap(&two, &six);
	swap(two, six);

	return 0;
}
