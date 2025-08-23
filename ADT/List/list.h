#include "item.h"

//Definizione struttura
typedef struct node *list;


//prototipi operatori
list newList(void);
int emptyList(list l);
list tailList(list l);
list consList(item val, list l);
item getFirst (list l);

//operatori aggiuntivi
int sizeList(list l);
int posItem(list l, item val);
item getItem(list l, int index);
list reverseList(list l);
