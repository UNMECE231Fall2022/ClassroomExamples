#include <cstddef>

template <typename T>
class SingleList {
	private:
		struct _node {
			T data;
			struct _node* next;
		};

		// typedef Node struct _node;
		using Node = struct _node;

		Node* _first;
		Node* _last;
		std::size_t _size;

		void reccopy(Node* ptr) {
			if (ptr) {
				push_front(ptr->data);
				reccopy(ptr->next);
			}
		}

	public:
		SingleList() : _first{nullptr}, _last{nullptr}, _size{0} {}

		SingleList(const SingleList& sl) : _first{nullptr}, _last{nullptr},
				_size{0} {
			reccopy(sl._first);
		}

		~SingleList() {
			while (!empty()) {
				pop_front();
			}
		}

		T front() const {
			return _first->data;
		}

		T last() const {
			return _last->data;
		}

		std::size_t size() const {
			return _size;
		}

		bool empty() const {
			return (_first == nullptr) && (_last == nullptr)\
							&& (_size == 0);
		}
};
