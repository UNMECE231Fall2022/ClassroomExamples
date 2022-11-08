#include <cstdlib>
#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v) {
	for (const auto& x: v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

void insertion_sort(std::vector<int>& v) {
	std::size_t v_size = v.size();
	for (int i=1; i<v_size; ++i) {
		for (int j=0; j<i; ++j) {
			if (v[i] < v[j]) {
				std::swap(v[i], v[j]);
			}
		}
	}
}

int main() {
	std::vector<int> x = {3, 2, 8, 210, 25 ,21, 98, 24, 78, 16, 90, 1};
	print_vector(x);

	insertion_sort(x);
	print_vector(x);

	return 0;
}
