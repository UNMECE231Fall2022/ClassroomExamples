#include <algorithm>
#include <array>
#include <iostream>
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

	std::for_each(stuff.begin(), stuff.end(), [](int& x) { x = 69; });
	std::for_each(stuff.begin(), stuff.end(), [](const int& x) { 
		std::cout << x << ' '; 
	});
	std::cout << "\n\n";

	std::for_each(other_stuff.begin(), other_stuff.end(), [](int& x) { x = 42; });
	std::for_each(other_stuff.begin(), other_stuff.end(), [](const int& x) { 
		std::cout << x << ' '; 
	});
	std::cout << '\n';

	std::for_each(other_stuff.begin(), other_stuff.end(), print_sq);
	std::cout << '\n';

	return 0;
}
