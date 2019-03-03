#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "lists.h"

struct node{
    Item item;
    link next;
};

void deleteNext(link curr){
    if(curr != NULL){
        link delNode = curr->next;
        if(delNode != NULL){
            curr->next = delNode->next;
            free(delNode);   
        }
    }
}

link deleteFirstItem(link list){
    if(list != NULL){
        link delNode = list;
        list = list->next;
        free(delNode);
    } 
    return list;
}

void printList(link list){
    link curr;
    for(curr = list; curr != NULL; curr= curr->next){
        printf("%d ",curr->item);
    }
    printf("\n");
}

link newList(){
    return NULL;
}

link newNode(Item item){
    link n = (link) malloc(sizeof(*n));
    n->item = item;
    n->next = NULL;
    return n;
}

//O(1)
link insertFront(link list, link n){
   n->next = list;
   return n;
}

int getItem(link list) {
    assert(list != NULL);
    return list->item;
}

int getItemIndex(link list, int index) {
    if (list == NULL) return -1;
    if (index == 0) return list->item;
    return getItemIndex(list->next, index-1);
}

static void newNodeTest(void) {
    printf("Testing newNode\n");
    link new = newNode(10);
    assert(new != NULL);
    assert(new->item == 10);
    assert(new->next == NULL);

    // free your list!

    printf("newNode passed!\n\n");
}

static void insertFrontTest(void) {
    printf("Testing insertFront\n");
    
    link list = NULL;
    list = insertFront(list, newNode(4));

    assert(list != NULL);
    assert(list->item == 4);
    assert(list->next == NULL);

    list = insertFront(list, newNode(5));
    assert(list != NULL);
    assert(list->item == 5);
    assert(list->next != NULL);
    assert(list->next->item == 4);
    assert(list->next->next == NULL);

    // free your list!

    printf("insertFront passed!\n\n");
}

void whiteBoxTest(void) {
    newNodeTest();
    insertFrontTest();
    // do for other functions as well :)
}


