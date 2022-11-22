#include <iostream>
#include <vector>

template <typename T>
void print_vector(const std::vector<T>& v) {
	for (const auto& x: v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

template <typename T>
void merge(std::vector<T>& v, int left_idx, int mid_idx, int right_idx) {
	int i, j, k;
	int l_size = mid_idx - left_idx + 1;
	int r_size = right_idx - mid_idx;

	std::vector<T> l_vector, r_vector;
	for (i=0; i<l_size; ++i) {
		l_vector.push_back(v[i + left_idx]);
	}

	for (j=0; j<r_size; ++j) {
		r_vector.push_back(v[j + mid_idx + 1]);
	}

	i=0, j=0; k=left_idx;

	while ((i<l_size) && (j<r_size)) {
		if (l_vector[i] < r_vector[j]) {
			v[k] = l_vector[i];
			i++;
		}
		else {
			v[k] = r_vector[j];
			j++;
		}
		k++;
	}

	while (i<l_size) {
		v[k] = l_vector[i];
		i++;
		k++;
	}

	while (j<r_size) {
		v[k] = r_vector[j];
		j++;
		k++;
	}

}

template <typename T>
void merge_sort(std::vector<T>& v, int left_idx, int right_idx) {
	if (left_idx < right_idx) {
		int mid_idx = (left_idx + right_idx) / 2;
		merge_sort(v, left_idx, mid_idx);
		merge_sort(v, mid_idx+1, right_idx);
		merge(v, left_idx, mid_idx, right_idx);
	}
}

int main() {
	std::vector<int> z = {2, 1, 4, 3};
	print_vector(z);
	merge_sort(z, 0, z.size()-1);
	print_vector(z);
	std::cout << '\n';

	std::vector<int> y = {4, 3, 1, 2};
	print_vector(y);
	merge_sort(y, 0, y.size()-1);
	print_vector(y);

	return 0;
}
