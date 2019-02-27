// a dumb program
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  unsigned long sum = 0;
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      sum += j;

  printf("sum is %ld\n", sum / n);
  return 0;
}
