#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x;

    // scanf("%d", x);
    // printf("scanf(%%d, x): %d\n", x);
    
    scanf("%d", &x);
    printf("scanf(%%d, &x): %d\n", x);

    fscanf(stdin, "%d", &x);
    printf("fscanf(stdin, %%d, &x): %d\n", x);

    fscanf(stderr, "%d", &x);
    printf("fscanf(stderr, %%d, &x): %d\n", x);

    printf("printf(%%d, x): %d\n", x);

    fprintf(stdout, "fprintf(stdout, %%d, x): %d\n", x);

    fprintf(stderr, "fprintf(stderr, %%d, x): %d\n", x);

    exit(EXIT_SUCCESS);
}
