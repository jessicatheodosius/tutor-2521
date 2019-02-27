#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[]) {
  unsigned long n;
  scanf ("%ld", &n);

  // some random thing
  unsigned long i;
  for (i = 0; i < 100000000; i++);

  unsigned long j;
  unsigned long sum = 0;
  for (j = 0; j < n; j++)
    sum += j;
  printf ("sum is %ld\n", sum);

  return 0;
}
