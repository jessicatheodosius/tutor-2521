#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "set.h"

typedef struct _Node {
  int value;
  struct _Node *next;
} Node;

struct _Set {
  Node *list;
  int size;
  int maxCapacity;
};

Node *newNode(int value) {
  Node *n = malloc(sizeof(Node));
  n->value = value;
  n->next = NULL;
  return n;
}

Set newSet(int maxCapacity) {
  Set s = malloc(sizeof(struct _Set));
  s->list = NULL;
  s->size = 0;
  s->maxCapacity = maxCapacity;
  return s;
}

bool exists(Set s, int value) {
  Node *curr = s->list;
  while (curr != NULL) {
    if (curr->value == value)
      return true;
    curr = curr->next;
  }
  return false;
}

void add(Set s, int value) {
  if (!exists(s, value)) {
    assert(s->size + 1 <= s->maxCapacity);
    Node *n = newNode(value);
    n->next = s->list;
    s->list = n;
    s->size++;
  }
}

void delete(Set s, int value) {
  Node *curr = s->list;
  Node *prev = NULL;

  while (curr != NULL && curr->value != value) {
    curr = curr->next;
  }

  if (curr != NULL) {
    Node *tmp = curr;
    if (prev == NULL) {
      s->list = curr->next;
    } else {
      prev->next = curr->next;
    }
    free(tmp);
    s->size--;
  }
}

int size(Set s) {
  return s->size;
}
