#include <iostream>

int main() {
	// double* first = (double*) malloc(1 * sizeof(double));
	double* first = new double;
	double second = 5.3249;
	double* third = &second;

	*first = 3.1415;

	std::cout << "First: " << first << " &first: " << &first;
	std::cout << " *first: " << *first << '\n';

	std::cout << "&second: " << &second << ' ';
	std::cout << "&third: " << &third << '\n';

	delete first;

	float* fourth = new float[6];
	for (int i=0; i<6; ++i) {
		fourth[i] = (i * 1) * (i + 2);
	}

	for (int i=0; i<6; ++i) {
		std::cout << *(fourth + i) << ' ';
	}
	std::cout << '\n';

	float* fourth_copy = new float[6];
	for (int i=0; i<6; ++i) {
		fourth_copy[i] = fourth[i];
	}
	delete[] fourth;
	fourth = new float[12];
	for (int i=0; i<6; ++i) {
		fourth[i] = fourth_copy[i];
	}
	
	delete[] fourth_copy;
	delete[] fourth;

	return 0;
}
