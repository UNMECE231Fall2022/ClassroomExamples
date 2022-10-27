#include <cassert> //assert
#include <cstddef> //std::size_t

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
				push_back(ptr->data);
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

		// pop_back

		void push_front(T value) {
			SingleList* item = new Node;
			item->data = value;
			item->next = nullptr;

			if (empty()) {
				_last = item;
			}
			else {
				item->next = _first;
			}

			_first = item;
			_size++;
		}

		void push_back(T value) {
			SingleList* item = new Node;
			item->data = value;
			item->next = nullptr;
			
			if (empty()) {
				_first = item;
			}
			// not empty
			else {
				_last->next = item;
			}
			_last = item;
			_size++;
		}
		
		void pop_front() {
			assert(!empty());
			/*
			 * if (empty()) {
			 * 	return;
			 * }
			 */
			SingleList* node_to_delete = _first;
			if (_size == 1) {
				_first = nullptr;
				_last = nullptr;
			}
			else {
				_first = _first->next;
			}
			delete node_to_delete;
			_size--;
		}

		void pop_back() {
			assert(!empty());
			SingleList* node_to_delete = _last;

			// Get second-to-last item
			SingleList* new_last = _first;
			while(new_last->next != _last) {
				new_last = new_last->next;
			}
			_last = new_last;
			_last->next = nullptr;
			delete node_to_delete;
			_size--;
		}
























		bool empty() const {
			return (_first == nullptr) && (_last == nullptr)\
							&& (_size == 0);
		}
};
