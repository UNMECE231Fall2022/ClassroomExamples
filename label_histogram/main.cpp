#include <array>
#include <algorithm>
#include <filesystem>
#include <iostream>
#include <ranges>
#include <regex>

#include "histo_from_dir.hpp"

void print_dir(const std::filesystem::directory_iterator& dir) {
	for (const auto& file: dir) {
		std::cout << file.path() << '\n';
	}
}

int main()  {
//	const std::filesystem::path label_path =
//		"/home/frankie/ECE231/Fall2022/ClassroomExamples/label_histogram"
//		"/firefighter_testdata";
	const std::filesystem::path label_path = 
		"/home/frankie/ECE231/Fall2022/ClassroomExamples/label_histogram"
		"/short_test";
	const std::filesystem::directory_iterator label_dir{label_path};
	const std::regex expr{"[0-3]"};

	std::array<int, 4> histo;
	std::ranges::for_each(histo, [](int& x) { x=0; });

	std::ranges::for_each(histo, [](int& x) { std::cout << x << ' '; });
	std::cout << '\n';

	histo_from_dir(label_dir, expr, histo);
	std::cout << '\n';

	std::ranges::for_each(histo, [](int& x) { std::cout << x << ' '; });
	std::cout << '\n';

	return 0;
}
