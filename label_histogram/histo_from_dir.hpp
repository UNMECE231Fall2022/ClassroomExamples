#include <array>
#include <filesystem>
#include <regex>

void histo_from_dir(const std::filesystem::directory_iterator& dir,
	const std::regex& expr, std::array<int, 4>& histo);
