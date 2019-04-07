#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

static int callFib;
int *fibCache;

int fib(int n) {
  callFib++;
  // top down dp
  if (fibCache[n] != -1)
    return fibCache[n];

  int prev = fib(n-1);
  int prevOfPrev = fib(n-2);

  fibCache[n] = prev + prevOfPrev;
  return fibCache[n];
}


int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  callFib = 0;

  // this is dynamic programming :o
  fibCache = malloc((n + 1)* sizeof(int));
  // we set -1 so that we know we haven't filled it before
  memset(fibCache, -1, (n + 1) * sizeof(int));
  fibCache[0] = 0;
  fibCache[1] = 1;

  printf("Fib of %d is %d.", n, fib(n));
  printf("Called fib %d times\n", callFib);

  return 0;
}
