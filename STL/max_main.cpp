#include <iostream>

/*
template <typename T>
T max(const T& a, const T& b) {
	return (a < b) ? b : a;
}

template <typename T>
T min(T& a, T& b) {
	return (a > b) ? b : a;
}
*/

int main() {
	float x = 8.2, y = 10.6;

	std::cout << std::min(x, y) << ' ' << std::max(x, y) << '\n';

	return 0;
}
