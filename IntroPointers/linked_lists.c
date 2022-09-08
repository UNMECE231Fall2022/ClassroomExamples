#include <stdio.h>

struct _list {
	float value;
	struct _list* next;
};

typedef struct _list List;

int search_list(List* node, float search_value) {
	List* temp;
	for (temp = node; temp != NULL; temp = temp->next) {
		printf("Comparing %f with %f\n", search_value, temp->value);
		if (temp->value == search_value) {
			return 0;
		}
	}
	return -1;
}

void print_list(List* node) {
	List* temp;
	for (temp = node; temp != NULL; temp = temp->next) {
		printf("%f ", temp->value);
		// printf("%p ", temp->next);
	}
	printf("\n");
}


int main() {
	List b;
	List c = { 6.7f, NULL };

	b.value = 5.9f;
	b.next = &c;

	List a = { 1.4f, &b };

	print_list(&a);

	List d = {9.9f, NULL };
	c.next = &d;

	print_list(&a);

	a.next = &c;
	c.next = &b;
	b.next = &d;

	print_list(&a);

	List e = {3.14, NULL };
	c.next = &e;
	e.next = &b;
	print_list(&a);

	return 0;
}
