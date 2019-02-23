#include <stdbool.h>

// Set of integers interface
typedef struct _Set *Set;

Set newSet(int maxCapacity);

void add(Set s, int value);

void delete(Set s, int value);

bool exists(Set s, int value);

int size(Set s);
