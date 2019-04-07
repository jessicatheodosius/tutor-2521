// apologies for inconsistent tab/space

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct ListNode *Link;

typedef struct ListNode {
    int value;
    Link next;
} ListNode;

typedef Link List;

#define head(L)  (empty(L) ? -1 : (L)->value)
#define tail(L)  (empty(L) ? NULL : (L)->next)
#define empty(L) ((L) == NULL)

// display the value contained in a ListNode
#define show(V) { printf("%d",(V)); }

// create a new ListNode containing supplied value
// prints error and exit()s if can't create a ListNode
Link newNode(int val) {
	Link new = malloc(sizeof(ListNode));
	assert(new != NULL);
	new->value = val;
	return new;
}

Link createList(int size) {
	if (size == 0)
		return NULL;

	Link head = newNode(size);
	head->next = createList(size-1);
	return head;
}

void drop(Link list) {
    // TODO;
}

void printList(Link list) {
	if (empty(list)) {
		printf("X\n");
	} else {
		show(list->value);
		printf("->");
		printList(tail(list));
	}
}

// acc is "accumulator"
int fold(Link list, int (*f)(int,int), int acc) {
    if (empty(list))
        return acc;
    else
        return f(head(list), fold(tail(list),f,acc));
}

int mult(int x, int y) {
	return x * y;
}

void map(Link list, int(*f)(int)) {
    if(!empty(list)) {
        list->value = f(head(list));
        map(tail(list), f);
     }
}

Link copy(Link list) {
    // TODO
    return NULL;
}

int one(int x) {
    return 1;
}

int sum(int x, int y) {
    return x + y;
}

int length(Link list) {
    // TODO
    return 0;
}

int square(int x) {
	return x * x;
}

int sumList(Link list) {
    // TODO
    return 0;
}

int main() {
	Link firstList = createList(5); // 5->4->3->2->1
	Link secondList = copy(firstList); // 5->4->3->2->1

  assert(length(firstList) == 5);
  assert(length(secondList) == 5);
	map(secondList, square);
	printList(firstList); // 5->4->3->2->1
	printList(secondList); // 25->16->9->4->1

  assert(sumList(firstList) == 15);
  assert(sumList(secondList) == 55);

  drop(firstList);
	drop(secondList);

  return 0;
}
