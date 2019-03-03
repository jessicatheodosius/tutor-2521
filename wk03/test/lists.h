typedef int Item;

typedef struct node * link;

void printList(link list);
link newList();
link newNode(Item item);
link insertFront(link list, link n);
link deleteFirstItem(link list);
int getItemIndex(link list, int index);
int getItem(link list);