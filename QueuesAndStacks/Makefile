all: elem_data_structs

elem_data_structs: main.cpp
	g++ -ggdb3 -std=c++20 $^ -o $@

valgrind: elem_data_structs
	valgrind --leak-check=yes ./elem_data_structs

clean:
	-rm elem_data_structs
