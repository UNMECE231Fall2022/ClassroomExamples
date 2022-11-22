#include <cstddef>
#include <iostream>
#include <vector>

template <typename T>
class Stack {
	private:
		std::vector<T> _data;
		std::size_t _size;
	
	public:
		Stack<T>() : _size{0} {}
		Stack<T>(T value) : _data(1, value), _size{1} {} 
//		Stack(T value): _size{1} {
//			_data.push_back(value);
//		}
		Stack<T>(const Stack<T>& s) : _data{s._data}, _size{s._size} {}

		std::size_t size() const {
			return _size;
		}

		T top() const {
			return _data.back();
		}

		void push(T value) {
			_data.push_back(value);
			_size++;
		}

		void pop() {
			_data.pop_back();
			_size--;
		}

		void print() const {
			for (const auto& x: _data) {
				std::cout << x << ' ';
			}
			std::cout << '\n';
		}

		Stack<T>& operator=(const Stack<T>& s) {
			if (&s == this) {
				return *this;
			}

			_data = s._data;
			_size = s._size;

			return *this;
		}

		bool empty() const {
			return _size == 0;
		}

		template <typename S>
		friend std::ostream& operator<<(std::ostream& out, const Stack<S>& s);
};

template <typename S>
std::ostream& operator<<(std::ostream& out, const Stack<S>& s) {
	for (const auto& x: s._data) {
		out << x << ' ';
	}
	return out;
}










