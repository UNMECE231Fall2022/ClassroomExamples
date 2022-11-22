#include <cassert>
#include <concepts>
#include <iostream>

template <typename T>
concept Number = std::integral<T> || std::floating_point<T>;

template <Number T>
class Queue {
	private:
		T* _data;
		std::size_t _size;

	public:
		Queue(): _data{nullptr}, _size{0} {}

		Queue(T value): _data{nullptr}, _size{0} {
			// _data = new T;
			// *_data = value;
			_data = new T(value);
			assert(_data != nullptr);
			_size = 1;
		}

		Queue(const Queue& other): _data{nullptr}, _size{0} {
			_data = new T[other._size];
			assert(_data != nullptr);
			for (int i=0; i<other._size; ++i) {
				_data[i] = other._data[i];
			}
			_size = other._size;
		}

		~Queue() {
			delete[] _data;
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
			T* data_copy = new T[_size];
			assert(data_copy != nullptr);
			int i;
			for (i=0; i<_size; ++i) {
				data_copy[i] = _data[i];
			}

			delete[] _data;
			_data = new T[_size+1];
			assert(_data != nullptr);

			for (i=0; i<_size; ++i) {
				_data[i] = data_copy[i];
			}
			_data[i] = value;
			_size++;

			delete[] data_copy;
		}

		void dequeue() {
			assert(!empty());
			T* data_copy = new T[_size];
			assert(data_copy != nullptr);
			int i;
			for (i=0; i<_size; ++i) {
				data_copy[i] = _data[i];
			}

			delete[] _data;
			_data = new T[_size-1];
			assert(_data != nullptr);

			for (i=1; i<_size; ++i) {
				_data[i-1] = data_copy[i];
			}

			_size--;
			delete[] data_copy;
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

			delete[] _data;
			_data = new T[other._size];
			assert(_data != nullptr);
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




















