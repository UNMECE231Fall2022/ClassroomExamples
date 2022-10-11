#include <cassert>
#include <iostream>

#include "frank_array.hpp"

Array::Array(int size) : _data{nullptr} {
	_data = new double[size];
	assert(_data != nullptr);
	_size = size;
	std::cout << "Constructor\n";
}

Array::~Array() {
	delete[] _data;
	std::cout << "Destructor for size " << size() << '\n';
}

int Array::size() const {
	return _size;
}

double& Array::at(int idx) {
	assert(idx < _size);
	return _data[idx];
}

double& Array::operator[](int idx) {
	// assert(idx < _size);
	return _data[idx];
}
