#include <iostream>
#include <string>
#include <vector>

// Yeah, looking at and running previous semester code results in the same error
// Just use std::copy ¯\_(ツ)_/¯
template <typename Iiter, typename Oiter>
Oiter copy(Iiter begin, Iiter end, Oiter dst) {
	for (; begin != end; ++begin, ++dst) {
		*dst = *begin;
	}
	return dst;
}

template <typename T>
void print_vector(const std::vector<T>& v) {
	for (const auto& x: v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

int main() {
	std::vector<float> x{6.2f, 9.7f, 3.5f, 2.1f};
	std::vector<float> y(4, 0.0f);

	print_vector(y);
	copy(x.begin()+2, x.end(), y.begin());
	print_vector(y);
	copy(x.rbegin()+2, x.rend(), y.begin());
	print_vector(y);

	return 0;
}
