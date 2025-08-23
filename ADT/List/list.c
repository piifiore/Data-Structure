#include <stdio.h>
#include<stdlib.h>
#include "item.h"
#include "list.h"

struct node
{
  item value;
  struct node *next;
};


list newList(void)
{
  return NULL;
}



int emptyList(list l)
{
  l == NULL;
}

list consList(item val, list l)
{
  struct node *nuovo;
  nuovo = malloc(sizeof(struct node)); //alloca la memoria necessaria a nuovo in base al suo tipo
  if (nuovo != NULL) //controlla se l'allocazione ha avuto successo
  {
    nuovo -> value = val;
    nuovo ->next = l; //il nuovo elemento punta alla testa della lista passata come parametro
    l = nuovo; // il nuovo elemento diventa la nuova testa della lista
  }
  
  return l;

}


list tailList(list l)
{

  list temp;
  if (l != NULL)
  {
    temp = l->next;
  } else
  {
    temp = NULL;
  }
  
  return temp;
  
}


item getFirst (list l)
{
  item e;

  if (l != NULL)
  {
    e = l-> value;
  } else
  {
    e = NULLITEM;
  }
   
  return e;
  

}
