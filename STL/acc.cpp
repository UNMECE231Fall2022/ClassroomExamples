#include <cassert>
#include <iostream>
#include <numeric>
#include <vector>

template <typename Iter, typename T>
T acc(Iter begin, Iter end, T val) {
	for (; begin != end; ++begin) {
		val += *begin;
	}
	return val;
}

int main() {
	std::vector<int> x{1, 2, 3, 4, 5};
	std::cout << "Tri num of 5: " << std::accumulate(x.begin(), x.end(), 40) << '\n';

	assert(x.size() != 0);
	int x_mean = std::accumulate(x.begin(), x.end(), 0)/x.size();
	std::cout << "Mean of x: " << x_mean << '\n';
	
	return 0;
}
