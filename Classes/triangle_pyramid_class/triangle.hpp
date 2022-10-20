// #ifndef TRIANGLE_H
#ifndef BASE_TRIANGLE_HPP
#define BASE_TRIANGLE_HPP

#include <ostream>

class Triangle {
	protected:
		// Independent
		int _base;
		int _height;

		// Dependent
		float _area;
		float _perimeter;

		void calc_area();
		void calc_perimeter();
		virtual void update_dependencies();

	public:
		Triangle();
		Triangle(int base, int height);
		Triangle(const Triangle& other);

		int base() const;
		int height() const;
		float area() const;
		float perimeter() const;

		virtual void set_base(int base);
		virtual void set_height(int height);

		Triangle& operator=(const Triangle& other);

		bool operator==(const Triangle& other);
		bool operator!=(const Triangle& other);

		friend std::ostream& operator<<(std::ostream& out,
				const Triangle& other);
};

#endif // BASE_TRIANGLE_HPP
