#include <iostream>
#include <vector>

template <typename T>
bool binary_search(const std::vector<T>& v, T search_value) {
	int begin=0, end=v.size()-1;

	while(true) {
		const int mid = (end + begin) / 2;
		if (v[mid] == search_value) {
			return true;
		}
	
		if (end == mid) {
			//return false;
			break;
		}

		if (v[mid] < search_value) {
			begin = mid + 1;
		}
		//if (v[mid] > search_value) {
		else {
			end = mid - 1;
		}
	}

	return false;
}

int main() {
	std::vector<int> x = {1, 4, 7, 8, 11, 12, 13, 17, 19};
	int first_search = 13;
	int second_search = 2;

	bool is_found = binary_search(x, first_search);
	if (is_found) {
		std::cout << first_search << " is found in x\n";
	}

	is_found = binary_search(x, second_search);
	if (!is_found) {
		std::cout << second_search << " is not found in x\n";
	}

	return 0;
}
