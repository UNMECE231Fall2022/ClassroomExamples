#include <iostream>
#include <string>
#include <vector>

/*
void swap(int& x, int& y) {
	int t = x;
	x = y;
	y = t;
}

void swap(float& x, float& y) {
	float t = x;
	x = y;
	y = t;
}

void swap(std::string& x, std::string& y) {
	std::string t = x;
	x = y;
	y = t; }
*/

template <typename T1, typename T2>
struct _pair {
	T1 first;
	T2 second;
};

using IntFloatPair = struct _pair<int, float>;

template <typename T>
void swap(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
void print_vector(const std::vector<T>& v) {
	for (const auto& x: v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

int main() {
	int a = 6, b = 8;
	std::cout << "a: " << a << " b: " << b << '\n';
	std::swap(a, b);
	std::cout << "a: " << a << " b: " << b << '\n';
	std::cout << '\n';

	std::vector<double> c = {9.4253, 6.98, 3.508};
	std::vector<double> d = {5.489, 7.125, 2.349};

	print_vector(c);
	print_vector(d);
	std::cout << '\n';
	swap(c, d);
	print_vector(c);
	print_vector(d);

	struct _pair<int, float> e = {42, 3.14f};
	//std::pair<double, char> f = {8.4580, 'r'};

	return 0;
}











