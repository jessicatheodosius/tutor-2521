#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "set.h"

int main(int argc, char *argv[]) {
  Set s = newSet(3);
  assert(size(s) == 0);

  add(s, 1);
  assert(size(s) == 1);
  assert(exists(s, 1));

  add(s, 1);
  assert(size(s) == 1);

  delete(s, 3);
  assert(size(s) == 1);

  add(s, 2);
  assert(size(s) == 2);
  assert(exists(s, 2));

  delete(s, 1);
  assert(size(s) == 1);
  assert(!exists(s, 1));

  return EXIT_SUCCESS;
}
