GPP=g++ -std=c++20 -ggdb3

all: lin_search bin_search insert_sort

lin_search: linear_search.cpp
	$(GPP) $<

bin_search: binary_search.cpp
	$(GPP) $<

insert_sort: insertion_sort.cpp
	$(GPP) $<

clean:
	-rm *.o lin_search bin_search insert_sort
