#ifndef BASE_SHAPE3D_HPP
#define BASE_SHAPE3D_HPP

class Shape3D {
	protected:
		int _depth;
		double _volume;
		double _surface_area;

		virtual void calc_volume() = 0;
		virtual void calc_surface_area() = 0;

	public:
		Shape3D();
		Shape3D(int depth);

		int depth() const;
		double volume() const;
		double surface_area() const;

		virtual void set_depth(int new_depth);
};

#endif // BASE_SHAPE3D_HPP
