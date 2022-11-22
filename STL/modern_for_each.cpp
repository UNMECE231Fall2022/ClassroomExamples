#include <algorithm>
#include <array>
#include <iostream>
#include <ranges>
#include <vector>

template <typename Iter, typename Func>
void ForEach(Iter begin, Iter end, Func f) {
	for (; begin != end; ++begin) {
		f(*begin);
	}
}

void print_sq(int x) {
	std::cout << (x*x) << ' ';
}

int main() {
	std::array<int, 100> stuff;
	std::vector<int> other_stuff(256);

	std::ranges::for_each(stuff, [](int& x) { x = 69; });
	std::ranges::for_each(stuff, [](const int& x) { std::cout << x << ' '; });
	std::cout << "\n\n";

	std::ranges::for_each(other_stuff, [](int& x) { x = 42; });
	std::ranges::for_each(other_stuff, [](const int& x) { std::cout << x << ' '; });
	std::cout << '\n';

	std::ranges::for_each(other_stuff, print_sq);
	std::cout << '\n';

	return 0;
}
