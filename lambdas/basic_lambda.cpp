#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> x{2, 4, 6, 8};
	int offset = 5;
	
	// [] () {}
	// [] - capture clause: can capture local variables in scope
	// () - parameter clause: parameters to be called by lambda
	// {} - function body: body of the lambda that does function stuff
	auto f = [offset](const int& a) {std::cout << (a+offset) << ' ';};

	auto add = [](int p, int q) { return p + q; };

	std::for_each(x.begin(), x.end(), f);
	std::cout << '\n';

	std::cout << (add(5, 7)) << '\n';

	return 0;
}
