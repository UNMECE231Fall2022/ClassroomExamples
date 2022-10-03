#include <iostream>
#include <string>

int main() {
	char c[] = {'H', 'i', '\0' };
	char* c2 = "Hello";

	std::string s = "Sup";
	for (int i=0; i<s.size(); ++i) {
		std::cout << s[i];
	}
	std::cout << '\n';

	std::cout << s << '\n';
	std::cout << s.c_str() << '\n';

	return 0;
}
