typedef char Item;

typedef struct node *link;

struct node {
  Item item;
  link next;
};

typedef struct dnode *dlink;

struct dnode {
  Item item;
  dlink next;
  dlink prev;
};

// Create a new node, initialised with the item provided. Return
// pointer to node (link)
link newNode (Item item);

void printList (link ls);

void printDList (dlink ls);

void printDListReverse (dlink ls);

dlink newDNode (Item item);

dlink singleToDouble (link ls);
