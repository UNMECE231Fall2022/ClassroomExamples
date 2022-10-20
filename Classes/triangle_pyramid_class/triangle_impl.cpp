#include <cassert> // assert.h
#include <cmath>   // math.h

#include "triangle.hpp"

// hyp = sqrt((0.5 * base) ** 2 + (height ** 2))
// peri = 2 * hyp + base
Triangle::Triangle() : _base{1}, _height{1}, 
		_area{0.5f}, _perimeter{3.23607f} {}

Triangle::Triangle(int base, int height) {
	set_base(base);
	set_height(height);
}

Triangle::Triangle(const Triangle& other) :
	_base{other._base}, _height{other._height},
	_area{other._area}, _perimeter{other._perimeter} {}

int Triangle::base() const {
	return _base;
}

int Triangle::height() const {
	return -_height;
}

float Triangle::area() const {
	return _area;
}

float Triangle::perimeter() const {
	return _perimeter;
}

void Triangle::set_base(int base) {
	assert(base > 0);
	_base = base;
	update_dependencies();
}

void Triangle::set_height(int height) {
	assert(height > 0);
	_height = height;
	update_dependencies();
}


void Triangle::calc_area() {
	// _area = 0.5f * _base * _height;
	_area = 0.5f * base() * height();
}

// hyp = sqrt((0.5 * base) ** 2 + (height ** 2))
// peri = 2 * hyp + base
void Triangle::calc_perimeter() {
	const float hyp = sqrt( ((0.5 * base()) * (0.5 * base())) \
			+ (height() * height()));
	_perimeter = hyp + hyp + base();
}

void Triangle::update_dependencies() {
	calc_area();
	calc_perimeter();
}

Triangle& Triangle::operator=(const Triangle& other) {
	if (this == &other) {
		return *this;
	}

	_base = other._base;
	_height = other._height;
	_area = other._area;
	_perimeter = other._perimeter;

	return *this;
}

std::ostream& operator<<(std::ostream& out,
			const Triangle& other) {
	out << other.base() << ' ' << other.height() << ' ';
	out << other.area() << ' ' << other.perimeter();
	return out;
}

bool Triangle::operator==(const Triangle& other) {
	return (base() == other.base())\
		&& (height() == other.height());
}

bool Triangle::operator!=(const Triangle& other) {
	return !(*this == other);
}





