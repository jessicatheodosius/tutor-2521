/*  Written by Jessica Theodosius 
    Compile it with gcc -Wall -Werror -o test lists.c testList.c 
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "lists.h"

void whiteBoxTest(void);

static void testNewNode(void);
static void testInsertFront(void);
static void testDeleteFirstItem(void);

int main(int argc, const char * argv[]) {
    printf("===== WHITE BOX TEST =====\n");
    whiteBoxTest();

    printf("===== BLACK BOX TEST =====\n");
    testNewNode(); 
    testInsertFront();
    testDeleteFirstItem();

    printf("ALL TESTS PASSED :)\n");
    return 0;
}

void testNewNode(void) {
    printf("Testing newNode\n"); 
    link new = newNode(5);
    assert(new != NULL);
    assert(getItem(new) == 5);
    assert(getItemIndex(new,0) == 5);

    // free your list!

    printf("newNode passed!\n\n");
}

void testInsertFront(void) {
    printf("Testing insertFront\n");
    
    link list = NULL;

    printf("Insert to empty list: ");
    list = insertFront(list, newNode(3));
    assert(list != NULL);
    assert(getItemIndex(list,0) == 3);
    printf("passed\n");

    printf("Insert to list with one item: ");
    list = insertFront(list, newNode(6));
    assert(list != NULL);
    assert(getItemIndex(list,0) == 6);
    assert(getItemIndex(list,1) == 3);
    printf("passed\n");

    list = insertFront(list, newNode(1));
    list = insertFront(list, newNode(4));

    printf("Insert to list with multiple items: ");
    assert(list != NULL);
    assert(getItemIndex(list,0) == 4);
    assert(getItemIndex(list,1) == 1);
    assert(getItemIndex(list,2) == 6);
    assert(getItemIndex(list,3) == 3);
    printf("passed\n");

    // free your list!
    
    printf("insertFront passed!\n\n");
}

void testDeleteFirstItem(void) {
    printf("Testing deleteFirstItem\n");

    link list = NULL;

    printf("Delete from empty list: ");  
    list = deleteFirstItem(list);
    assert(list == NULL);
    printf("passed\n");

    list = insertFront(list, newNode(10));
    
    printf("Delete from list with one item: ");
    list = deleteFirstItem(list);
    assert(list == NULL);
    printf("passed\n");

    list = insertFront(list, newNode(5));
    list = insertFront(list, newNode(3));
    list = insertFront(list, newNode(9));
    list = insertFront(list, newNode(2));

    printf("Delete from list with multiple items: ");
    list = deleteFirstItem(list);
    assert(list != NULL);
    assert(getItem(list) == 9);
    assert(getItemIndex(list,1) == 3);
    assert(getItemIndex(list,2) == 5);
    printf("passed\n");

    // free your list!

    printf("deleteFirstItem passed!\n\n");
}
