#include <iostream>
#include "cube.hpp"

int main() {
	Cube x;
	Cube y(6, 9, 3);
	Rectangle z(5, 4);

	std::cout << "x: " << x.length() << ' ' << x.width() << ' ';
	std::cout << x.depth() << '\n';

	std::cout << "y: " << y.length() << ' ' << y.width() << ' ';
	std::cout << y.depth() << '\n';

	std::cout << "z: " << z.length() << ' ' << z.width() << '\n';

	return 0;
}
