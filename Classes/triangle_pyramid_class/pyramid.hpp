#ifndef DERIVED_PYRAMID_HPP
#define DERIVED_PYRAMID_HPP

#include "triangle.hpp"
#include "shape3D.hpp"

class Pyramid : public Triangle, public Shape3D {
	private:
		void calc_volume() override;
		void calc_surface_area() override;
		void update_dependencies() override;

	public:
		Pyramid();
		Pyramid(int base, int height, int depth);
		Pyramid(const Pyramid& p);


		void set_base(int base) override;
		void set_height(int height) override;
		void set_depth(int new_depth) override;
};

#endif // DERIVED_PYRAMID_HPP
