#include <stdio.h>
#include <stdlib.h>

static int callFib;

int fib(int n) {
  callFib++;
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main(int argc, char **argv) {
  int n = atoi(argv[1]);

  callFib = 0;
  printf("Fib of %d is %d.", n, fib(n));
  printf("Called fib %d times\n", callFib);

  return 0;
}
