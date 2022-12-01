GPP=g++ -ggdb3 -std=c++20

all: histo

histo: main.o histo_from_dir_impl.o
	$(GPP) $^ -o $@

main.o: main.cpp histo_from_dir.hpp
	$(GPP) -c $<

histo_from_dir_impl.o: histo_from_dir_impl.cpp histo_from_dir.hpp
	$(GPP) -c $<

#valgrind: histo
#	valgrind --leak-check=yes ./histo

clean:
	rm *.o histo
