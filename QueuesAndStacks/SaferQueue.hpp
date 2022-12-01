#include <cassert>
#include <concepts>
#include <iostream>
#include <memory>

template <typename T>
concept Number = std::integral<T> || std::floating_point<T>;

template <Number T>
class Queue {
	private:
		std::unique_ptr<T[]> _data;
		std::size_t _size;

	public:
		Queue(): _size{0} {}

		Queue(T value): _size{1} {
			_data = std::make_unique<T[]>(1);
			_data[0] = value;
		}

		Queue(const Queue& other): _size{other._size} {
			_data = std::make_unique<T[]>(other._size);
			for (int i=0; i<other._size; ++i) {
				_data[i] = other._data[i];
			}
		}

		std::size_t size() const {
			return _size;
		}

		T front() const {
			return _data[0];
		}

		T back() const {
			return _data[_size-1];
		}

		void enqueue(T value) {
			std::unique_ptr<T[]> data_copy(std::make_unique<T[]>(_size));
			int i;
			for (i=0; i<_size; ++i) {
				data_copy[i] = _data[i];
			}

			_data = std::make_unique<T[]>(_size+1);

			for (i=0; i<_size; ++i) {
				_data[i] = data_copy[i];
			}
			_data[i] = value;
			_size++;
		}

		void dequeue() {
			assert(!empty());
			std::unique_ptr<T[]> data_copy(std::make_unique<T[]>(_size));
			int i;
			for (i=0; i<_size; ++i) {
				data_copy[i] = _data[i];
			}

			_data = std::make_unique<T[]>(_size-1);

			for (i=1; i<_size; ++i) {
				_data[i-1] = data_copy[i];
			}

			_size--;
		}

		void print() const {
			for (int i=0; i<_size; ++i) {
				std::cout << _data[i] << ' ';
			}
			std::cout << '\n';
		}

		bool empty() const {
			return _size == 0;
		}

		Queue& operator=(const Queue& other) {
			if (&other == this) {
				return *this;
			}

			_data= std::make_unique<T[]>(other._size);

			for (int i=0; i<other._size; ++i) {
				_data[i] = other._data[i];
			}
			_size = other._size;

			return *this;
		}

		template <typename Q>
		friend std::ostream& operator<<(std::ostream& out, const Queue<Q>& other);
};

template <typename Q>
std::ostream& operator<<(std::ostream& out, const Queue<Q>& other) {
	for (int i=0; i<other._size; ++i) {
		out << other._data[i] << ' ';
	}
	return out;
}
