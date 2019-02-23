#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

link newNode (Item item) {
	link new = malloc(sizeof(struct node));
	new->item = item;
	new->next = NULL;
	return new;
}

dlink newDNode (Item item) {
	dlink new = malloc(sizeof(struct dnode));
	new->item = item;
	new->prev = NULL;
	new->next = NULL;
	return new;
}

void printList (link ls) {
	if (ls == NULL) {
		printf("X\n");
	} else {
		printf("%c->", ls->item);
		printList(ls->next);
	}
}

void printDList (dlink ls) {
  dlink curr;
  for (curr = ls; curr != NULL; curr = curr->next) {
    printf ("%c->", curr->item);
  }
  printf ("X\n");
}

static void printDListReverseHelper (dlink ls) {
  if (ls == NULL) {
    printf ("X\n");
  } else {
    printf ("%c->", ls->item);
    printDListReverseHelper (ls->prev);
  }
}

void printDListReverse (dlink ls) {
  dlink curr;
  for (curr = ls; curr != NULL && curr->next != NULL; curr = curr->next);
  printDListReverseHelper (curr);
}

dlink singleToDouble (link ls) {
    // complete this
  return NULL;
}
