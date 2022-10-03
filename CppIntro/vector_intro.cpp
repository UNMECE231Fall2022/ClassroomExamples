#include <array>
#include <iostream>
#include <vector>

int main() {
	std::array<int, 2> x = { 1, 9 };
	for (const auto& i : x) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	std::cout << x.size() << '\n';

	std::vector<int> y = { 1, 9 };
	std::cout << y.size() << '\n';
	for (const auto& i : y) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	y.push_back(12);
	std::cout << y.size() << '\n';
	for (int i=0; i<y.size(); i += 2) {
		std::cout << y[i] << ' ';
	}
	std::cout << '\n';

	return 0;
}
