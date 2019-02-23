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

/* static dlink singleToDoubleSeq (link ls) { */
/*   dlink head = NULL; */
/*   dlink tail; */

/*   while (ls != NULL) { */
/*     dlink dnode = newDNode (ls->item); */
/*     if (head == NULL) { */
/*       head = dnode; */
/*     } else { */
/*       tail->next = dnode; */
/*       dnode->prev = tail; */
/*     } */
/*     tail = dnode; */
/*     ls = ls->next; */
/*   } */

/*   return head; */
/* } */

static dlink singleToDoubleRec (link ls) {
  if (ls == NULL) return NULL;

  dlink head = newDNode (ls->item);
  dlink tail = singleToDoubleRec (ls->next);
  head->next = tail;
  if (tail != NULL) tail->prev = head;

  return head;
}

dlink singleToDouble (link ls) {
  return singleToDoubleRec (ls);
}
