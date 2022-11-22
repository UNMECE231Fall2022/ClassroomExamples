GPP=g++ -std=c++20 -ggdb3

all: lin_search bin_search insert_sort merg_sort

lin_search: linear_search.cpp
	$(GPP) $< -o $@

bin_search: binary_search.cpp
	$(GPP) $< -o $@

insert_sort: insertion_sort.cpp
	$(GPP) $< -o $@

merg_sort: merge_sort.cpp
	$(GPP) $< -o $@

clean:
	-rm *.o lin_search bin_search insert_sort
