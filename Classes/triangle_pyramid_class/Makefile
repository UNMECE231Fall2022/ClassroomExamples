GPP=g++ --std=c++20

all: luxor

luxor: main.o triangle_impl.o pyramid_impl.o shape3D_impl.o
	$(GPP) $^ -o $@

main.o: main.cpp triangle.hpp pyramid.hpp shape3D.hpp
	$(GPP) -c $<

shape3D.o: shape3D_impl.cpp shape3D.hpp
	$(GPP) -c $<

triangle_impl.o: triangle_impl.cpp triangle.hpp
	$(GPP) -c $<

pyramid_impl.o: pyramid_impl.cpp pyramid.hpp
	$(GPP) -c $<

clean:
	-rm *.o luxor
