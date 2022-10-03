#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v) {
	for (const auto& i : v) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

void print_vector_goal(const std::vector<int>& v) {
	for (const auto& i : v) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

void square_vector(std::vector<int>& v) {
	for (auto& i : v) {
		i *= i;
	}
}

int main() {
	std::vector<int> x = { 1, 2, 3 };
	print_vector(x);
	print_vector_goal(x);

	square_vector(x);
	print_vector(x);

	return 0;
}
