#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "set.h"

struct _Set {
  int *content;
  int *hasItems; // 1 if there is something, 0 if nothing
  int maxCapacity;
};

Set newSet(int maxCapacity) {
  Set s = malloc(sizeof(struct _Set));
  s->content = calloc(maxCapacity, sizeof(int));
  s->hasItems = calloc(maxCapacity, sizeof(int));
  s->maxCapacity = maxCapacity;
  return s;
}

bool exists(Set s, int value) {
  int i;
  for (i = 0; i < s->maxCapacity; i++)
    if (s->hasItems[i] && s->content[i] == value)
      return true;
  return false;
}

int size(Set s) {
  int i;
  int sum = 0;
  for (i = 0; i < s->maxCapacity; i++)
    if (s->hasItems[i])
      sum++;
  return sum;
}

void add(Set s, int value) {
  if (!exists(s, value)) {
    assert(size(s) < s->maxCapacity);
    int i;
    for (i = 0; i < s->maxCapacity; i++) {
      if (!s->hasItems[i]) {
        s->content[i] = value;
        s->hasItems[i] = 1;
        break;
      }
    }
  }
}

void delete(Set s, int value) {
  int i;
  for (i = 0; i < s->maxCapacity; i++)
    if (s->hasItems[i] && s->content[i] == value)
      s->hasItems[i] = 0;
}
