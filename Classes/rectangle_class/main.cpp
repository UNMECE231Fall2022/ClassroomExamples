#include <iostream>
#include "rectangle.hpp"

Rectangle operator+(int x, const Rectangle& r);

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

	std::cout << "Y: " << y << '\n';
	std::cout << "Z: " << z << '\n'; z = y;

	std::cout << "Y: " << y << '\n';
	std::cout << "Z: " << z << '\n';

	z = y * 5;
	y = x + 3;

	std::cout << "Y: " << y << '\n';
	std::cout << "Z: " << z << '\n';

	Rectangle a;
	// z = x + y - a + 10;
	z = ((x.operator+(y)).operator-(a)).operator+(10);
	std::cout << "Z: " << z << '\n';

	return 0;
}
