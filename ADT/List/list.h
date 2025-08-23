#include "item.h"

//Definizione struttura
typedef struct node *list;


//prototipi operatori
list newList(void);
int emptyList(list l);
list tailList(list l);
list consList(item val, list l);
item getFirst (list l);

