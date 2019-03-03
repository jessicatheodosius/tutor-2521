#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int TreeItem;
typedef struct treeNode * treelink;
typedef struct _node * dlink;
typedef struct _dlist * dlist;
//Functions that are provided
treelink insertTreeNode (treelink tree, TreeItem item);
void preorderTraversal (treelink tree, void (*visit) (treelink));
void printTreeNode (treelink t);
TreeItem getItem(treelink t);
treelink searchInsert(treelink t, TreeItem i); 

// check if a tree is balanced
void printDList (dlist l);
dlist createList(void);
void BSTtoDL(dlist sorted, treelink t);
