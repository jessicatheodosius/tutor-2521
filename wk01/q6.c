#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
}

int main(int argc, char *argv[]) {
    int a[] = {0, 1, 2, 3};
    swap(a, 1, 3);

    for (int i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }

    exit(EXIT_SUCCESS);
}
