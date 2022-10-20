#include <cassert>

#include "cube.hpp"

Cube::Cube() : Rectangle(), _depth{1}, _volume{1},
	_surface_area{6} { }

Cube::Cube(int length, int width, int depth) : 
		Rectangle(length, width) {
	set_depth(depth);
	calc_volume();
	calc_surface_area();
}

Cube::Cube(const Cube& other) : Rectangle(other), 
		_depth{other._depth}, _volume{other._volume},
		_surface_area{other._surface_area} {}

int Cube::depth() const {
	return _depth;
}

float Cube::volume() const {
	return _volume;
}

float Cube::surface_area() const {
	return _surface_area;
}

void Cube::set_length(int new_length) {
	Rectangle::set_length(new_length);
	calc_surface_area();
	calc_volume();
}

void Cube::set_width(int new_width) {
	Rectangle::set_width(new_width);
	calc_surface_area();
	calc_volume();
}

void Cube::set_depth(int depth) {
	assert(depth > 0);
	_depth = depth;
	calc_surface_area();
	calc_volume();
}

void Cube::calc_volume() {
	_volume = _length * _width * _depth;
}

void Cube::calc_surface_area() {
	_surface_area = (2 * area())\
		+ (2 * _length * _depth)\
		+ (2 * _width * _depth);
}

Cube& Cube::operator=(const Cube& c) {
	if (this == &c) {
		return *this;
	}

	_length = c._length;
	_width = c._width;
	_depth = c._depth;
	_volume = c._volume;
	_surface_area = c._surface_area;

	return *this;
}

std::ostream& operator<<(std::ostream& out, const Cube& c) {
	out << c.length() << ' ' << c.width() << ' ' << c.depth();
	out << ' ' << c.volume() << ' ' << c.surface_area();
	return out;
}










