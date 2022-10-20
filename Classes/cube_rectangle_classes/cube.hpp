#ifndef DERIVED_CUBE_HPP
#define DERIVED_CUBE_HPP

#include "rectangle.hpp"

class Cube : public Rectangle {
	private:
		int _depth;
		float _volume;
		float _surface_area;

		void calc_volume();
		void calc_surface_area();

	public:
		Cube();
		Cube(int length, int width, int depth);
		Cube(const Cube& other);

		int depth() const;
		float volume() const;
		float surface_area() const;

		void set_length(int new_length) override;
		void set_width(int new_width) override;
		void set_depth(int depth);

		Cube& operator=(const Cube& c);

		friend std::ostream& operator<<(std::ostream& out, const Cube& c);
};

#endif // DERIVED_CUBE_HPP
