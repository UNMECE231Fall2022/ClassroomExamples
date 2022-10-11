#ifndef BASE_RECTANGLE_HPP
#define BASE_RECTANGLE_HPP

#include <ostream>

class Rectangle {
	private:
		int _length;
		int _width;

	public:
		// Unparameterized constructor
		Rectangle();
		// Parameterized constructor
		Rectangle(int length, int width);
		// Copy constructor
		Rectangle(const Rectangle& r);
		// Move constructor
		Rectangle(Rectangle&& r);
		// Destructor
		~Rectangle();

		// Getters
		int length() const;
		int width() const;

		// Setters
		void set_length(int new_length);
		void set_width(int new_width);


		void print() const;
		int area() const;
		int perimeter() const;
		Rectangle add_rectangle(const Rectangle& r);
		Rectangle sub_rectangle(const Rectangle& r);
		Rectangle add_rectangle(int x);

		Rectangle operator+(const Rectangle& r);
		Rectangle operator-(const Rectangle& r);

		Rectangle operator+(int x);
		Rectangle operator*(int x);

		Rectangle& operator=(const Rectangle& r);

		friend std::ostream& operator<<(std::ostream& out, const Rectangle& r);
};

#endif // BASE_RECTANGLE_HPP
