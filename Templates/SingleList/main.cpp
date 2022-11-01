#include <iostream>

#include "singlelist.hpp"

// TODO: Test pop_back, operator=
int main() {
	SingleList<int> x;
	std::cout << "Will print 1 for empty: " << x.empty() << '\n';
//	x.pop_back();
//	x.pop_front();
	x.push_front(4);
	x.push_back(6);
	x.push_front(19);

	std::cout << "First value of x: " << x.front() << '\n';
	std::cout << "Last value of x: " << x.last() << '\n';
	std::cout << "Size of x: " << x.size() << '\n';

	return 0;
}
