#include <iostream>

#include "pyramid.hpp"

int main() {
	Pyramid x;
	Pyramid y(2, 4, 6);
	x.Triangle::set_base(4);

	// y.set_base(z) == y.Pyramid::set_base(z);

	return 0;
}
