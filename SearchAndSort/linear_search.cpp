#include <iostream>
#include <vector>

template <typename T>
bool linear_search(const std::vector<T>& v, T search_value) {
	for (const auto& x: v) {
		if (x == search_value) {
			return true;
		}
	}
	return false;
}

template <typename T>
int linear_search_idx(const std::vector<T>& v, T search_value) {
	for (int i=0; i<v.size(); ++i) {
		if (v[i] == search_value) {
			return i;
		}
	}
	return -1;
}

int main() {
	std::vector<int> x = {12, 4, 19, 7, 11, 1};
	int first_search = 19;
	int second_search = 45;

//	bool search_result = linear_search(x, first_search);
//	//if (search_result == true) {
//	if (search_result) {
//		std::cout << first_search << " is found in x\n";
//	}
//
//	search_result = linear_search(x, second_search);
//	//if (search_result == false) {
//	if (!search_result) {
//		std::cout << second_search << " is not found in x\n";
//	}
	int search_idx = linear_search_idx(x, first_search);

	if (search_idx != -1 ) {
		std::cout << first_search << " is found in index: " << search_idx << '\n';
	}

	search_idx = linear_search_idx(x, second_search);
	if (search_idx == -1) {
		std::cout << second_search << " is not found in x\n";
	}

	return 0;
}
