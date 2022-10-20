#include <cassert>

#include "shape3D.hpp"

Shape3D::Shape3D() : _depth{1} {}

Shape3D::Shape3D(int depth) {
	set_depth(depth);
}

int Shape3D::depth() const {
	return _depth;
}

double Shape3D::volume() const {
	return _volume;
}

double Shape3D::surface_area() const {
	return _surface_area;
}

void Shape3D::set_depth(int new_depth) {
	assert(new_depth > 0);
	_depth = new_depth;
}
