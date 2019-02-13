#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct _Node {
    int value;
    struct _Node *next;
} Node;

typedef Node *List;

Node *newNode(int value) {
    Node *n = (Node *) malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;
    return n;
}

int sumListWhile(List list) {
    int sum = 0;
    while (list != NULL) {
        sum += list->value;
        list = list->next;
    }
    return sum;
}

int sumListFor(List list) {
    int sum = 0;
    for (; list != NULL; list = list->next) {
        sum += list->value;
    }
    return sum;
}

int sumListRec(List list) {
    if (list == NULL) return 0;
    return list->value + sumListRec(list->next);
}

int main(int argc, char *argv[]) {
    List list = newNode(3);
    list->next = newNode(7);
    list->next->next = newNode(6);

    int sum;
    
    sum = sumListWhile(NULL);
    assert(sum == 0);
    sum = sumListWhile(list);
    assert(sum == 16);

    sum = sumListFor(NULL);
    assert(sum == 0);
    sum = sumListFor(list);
    assert(sum == 16);

    sum = sumListRec(NULL);
    assert(sum == 0);
    sum = sumListRec(list);
    assert(sum == 16);

    exit(EXIT_SUCCESS);
}


