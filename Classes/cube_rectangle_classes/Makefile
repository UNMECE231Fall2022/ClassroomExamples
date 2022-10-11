all: cube_time

cube_time: main.o rectangle_impl.o cube_impl.o
	g++ $^ -o $@

main.o: main.cpp rectangle.hpp
	g++ -c $< -o $@

rectangle_impl.o: rectangle_impl.cpp rectangle.hpp
	g++ -c $< -o $@

cube_impl.o: cube_impl.cpp cube.hpp
	g++ -c $< -o $@

clean:
	-rm *.o cube_time
