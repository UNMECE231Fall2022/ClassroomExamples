#include <iostream>
#include <string>
#include "SaferQueue.hpp"

int main() {
	Queue<int> q1;
	Queue<int> q2(5);

	if (q1.empty()) {
		std::cout << "Q1 iq empty!\n";
	}

	if (!q2.empty()) {
		std::cout << "Q2 contains data!\n";
	}

	std::cout << "Front of q2: " << q2.front() << '\n';
	std::cout << "Back of q2: " << q2.back() << '\n';
	q2.enqueue(9);
	std::cout << "Front of q2: " << q2.front() << '\n';
	std::cout << "Back of q2: " << q2.back() << '\n';
	std::cout << "Size of q2: " << q2.size() << '\n';

	q1.enqueue(4);
	Queue<int> q3(q2);
	q2 = q1;

	q1.print();
	std::cout << q2 << '\n';
	q3.print();

	std::cout << "Front of q3: " << q3.front() << '\n';
	std::cout << "Back of q3: " << q3.back() << '\n';
	q3.dequeue();
	std::cout << "Front of q3: " << q3.front() << '\n';
	std::cout << "Back of q3: " << q3.back() << '\n';
	std::cout << "Size of q3: " << q3.size() << '\n';

	return 0;
}




