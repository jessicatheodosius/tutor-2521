#include <stdio.h>
#include "list.h"

int main (int argc, char *argv[]) {
  // a->b->c->d->X
  link ls = newNode('a');
	ls->next = newNode('b');
	ls->next->next = newNode('c');
	ls->next->next->next = newNode('d');

	printf("the original list is ");
	printList(ls);

	// 1<->2<->3<->X
	dlink dls1 = newDNode('1');
	dlink second = newDNode('2');
	dlink third = newDNode('3');
	dls1->next = second;
	second->prev = dls1;
	second->next = third;
	third->prev = second;

	printf("dlist1 is ");
	printDList(dls1);
	printf("dlist1 in reversed order is ");
  printDListReverse(dls1);

  dlink dup = singleToDouble(ls);
	printf("dup is ");
	printDList(dup);
	printf("dup in reversed order is ");
  printDListReverse(dup);

	return 0;
}
