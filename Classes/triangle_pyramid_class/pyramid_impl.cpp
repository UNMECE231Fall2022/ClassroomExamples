#include <cmath>
#include <cassert>

#include "pyramid.hpp"

// v = (b * h * d) / 3.0
// sa = b*h + b * sqrt( ((d/2)**2) + h**2) + d * sqrt( ((b/2)**2) + h**2)
Pyramid::Pyramid() : Triangle(), Shape3D() {
	update_dependencies();
} 

Pyramid::Pyramid(int base, int height, int depth) : Triangle(base, height),
		Shape3D(depth) {
	update_dependencies();
}

Pyramid::Pyramid(const Pyramid& p) : Triangle(p), Shape3D(p._depth) {
	update_dependencies();
}

void Pyramid::set_base(int base) {
	Triangle::set_base(base);
	update_dependencies();
}

void Pyramid::set_height(int height) {
	Triangle::set_height(height);
	update_dependencies();
}

void Pyramid::set_depth(int new_depth) {
	Shape3D::set_depth(new_depth);
	update_dependencies();
}

// v = (b * h * d) / 3.0
void Pyramid::calc_volume() {
	_volume = (_base * _height * _depth) / 3.0;
}

// sa = b*h + b * sqrt( ((d/2)**2) + h**2) + d * sqrt( ((b/2)**2) + h**2)
void Pyramid::calc_surface_area() {
	float base_area = base() * height();
	float forward_backface_area = base() * sqrt( ((_depth/2.0) * (_depth/2.0))\
			+ (height() * height()));
	float side_area = _depth * sqrt( ((base() / 2.0) * (base() / 2.0))\
			+ (height() * height()));

	_surface_area = base_area + forward_backface_area + side_area;
}

void Pyramid::update_dependencies() {
	calc_volume();
	calc_surface_area();
}
















