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

//da l'elemento successivo a quello preso attualmente
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


//operatori aggiuntivi

int sizeList(list l)
{
  int e = 0;

  while (!emptyList(l))
  {
    e++;
    l = tailList(l);
  }
  
  return e;

}


int posItem(list l, item val) {
    int pos = 0;
    // Scorro la lista fino a trovare val o arrivare alla fine
    while (!emptyList(l)) {
        if (eq(getFirst(l), val)) {
            return pos;
        }
        l = tailList(l);
        pos++;
    }
    return -1;  // non trovato
}

item getItem(list l, int index)
{
  item trovato;

  if (index >= sizeList(l))
  {
    return NULLITEM;
  } 
  
  for (int i = 0; i < index; i++) {
      l = tailList(l);
  }
  
  

  trovato = getFirst(l);

  return trovato;
  
}

list reverseList(list l)
{
 list rev; // Dichiarazione di un puntatore a una nuova lista invertita
 item val; // Dichiarazione di una variabile temporanea per memorizzare il valore degli elementi
 rev = newList(); // Inizializzazione della nuova lista vuota
 // Ciclo finché la lista originale non è vuota
 while (!emptyList(l)) {
 val = getFirst(l); // Ottiene il valore del primo elemento della lista originale
 rev = consList(val, rev); // Aggiunge il valore alla testa della lista invertita
 l = tailList(l); // Passa al prossimo elemento della lista originale
 }
 return rev; // Restituisce la lista invertita
}

