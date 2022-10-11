#include "rectangle.hpp"
#include <cassert>
// #include <assert.h>
#include <iostream>
#include <utility>

Rectangle::Rectangle() : _length{1}, _width{1} { }

Rectangle::Rectangle(int length, int width) {
//	std::cout << "Param constructor called\n";
	set_length(length);
	set_width(width);
//	std::cout << "Length: " << _length << ' ';
//	std::cout << "width: " << _width << '\n';
}

Rectangle::Rectangle(const Rectangle& r) : _length{r._length},
	_width{r._width} {}

Rectangle::Rectangle(Rectangle&& r) : 
		_length{std::move(r._length)},
		_width{std::move(r._width)} {}

Rectangle::~Rectangle() {
//	std::cout << "Destructor is called for ";
//	std::cout << length() << ' ' << width() << '\n';
}

int Rectangle::length() const {
	return _length;
}

int Rectangle::width() const {
	return _width;
}

void Rectangle::set_length(int new_length) {
	assert(new_length > 0);
	_length = new_length;
}

void Rectangle::set_width(int new_width) {
	assert(new_width > 0);
	_width = new_width;
}

void Rectangle::print() const {
	std::cout << "Length: " << length() << ' ';
	std::cout << "width: " << width() << '\n';
}

int Rectangle::area() const {
	return length() * width();
}

int Rectangle::perimeter() const {
	return (2 * length()) + (2 * width());
}

Rectangle Rectangle::add_rectangle(const Rectangle& r) {
	Rectangle t;
	t.set_length(length() + r.length());
	t.set_width(width() + r.width());
	return t;
}

Rectangle Rectangle::sub_rectangle(const Rectangle& r) {
	Rectangle t;
	t.set_length(length() - r.length());
	t.set_width(width() - r.width());
	return t;
}

Rectangle Rectangle::add_rectangle(int x) {
	Rectangle t(length() + x, width() + x);
	return t;
}

Rectangle Rectangle::operator+(const Rectangle& r) {
	return add_rectangle(r);
}

Rectangle Rectangle::operator-(const Rectangle& r) {
	return sub_rectangle(r);
}

Rectangle Rectangle::operator+(int x) {
	return add_rectangle(x);
}

Rectangle Rectangle::operator*(int x) {
	Rectangle t(length() * x, width() * x);
	return t;
}

Rectangle& Rectangle::operator=(const Rectangle& r) {
	if (this == &r) {
		return *this;
	}

	set_length(r.length());
	set_width(r.width());
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Rectangle& r) {
	out << r._length << ' ' << r._width;
	return out;
}




