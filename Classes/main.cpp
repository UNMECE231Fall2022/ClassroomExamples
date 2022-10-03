#include <iostream>
#include "rectangle.hpp"

int main() {
	Rectangle x;
	Rectangle y(9, 5);

	std::cout << "x: " << x.length() << ' ' << x.width() << '\n';
	std::cout << "y: " << y.length() << ' ' << y.width() << '\n';

	x.set_width(115);
	std::cout << "x: " << x.length() << ' ' << x.width() << '\n';

	// Rectangle z = x.add_rectangle(y);
	Rectangle z = x + y;
	z.print();

	std::cout << "Area of y: " << y.area() << '\n';
	std::cout << "Perimeter of y: " << y.perimeter() << '\n';

	return 0;
}
