all: rectangle_time

# $^ == main.o rectangle_impl.o
# $@ == rectangle_time
rectangle_time: main.o rectangle_impl.o
	g++ $^ -o $@

# $< == main.cpp
# $@ == main.o
main.o: main.cpp rectangle.hpp
	g++ -c $< -o $@

# $< rectangle_impl.cpp
# $@ rectangle_impl.o
rectangle_impl.o: rectangle_impl.cpp rectangle.hpp
	g++ -c $< -o $@

clean:
	-rm *.o rectangle_time
