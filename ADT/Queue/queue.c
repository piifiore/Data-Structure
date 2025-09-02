//implementiamo le queue con le liste concatenate 
#include <stdio.h>
#include <stdlib.h>
#include "item.h"

struct Node
{
  item value;
  struct Node *next; //punta al nodo successivo
};

struct Queue
{
  struct Node *head, *tail; //puntano al primo ed ultimo elemento della coda
  int size; //size della coda
};

struct Queue * newQueue()
{

  struct Queue *q = calloc(sizeof(struct Queue), 1);
  if(!q) exit(1);

  return q;

}
//vede se la losta é vuota
int emptyQueue(struct Queue *q)
{
  return q->size == NULL;
}

//Aggiunge elemento alla coda
int endqueue(item e, struct Queue *q)
{

  struct Node *nuovo = NULL;
  nuovo = malloc(sizeof(struct Node));
  if(!nuovo) exit(1);

  nuovo->next = NULL;
  nuovo->value = e;

  if (emptyQueue(q))
  {
    q->head = nuovo;
  } else
  {
    q->tail->next = nuovo;
  }
  
  q->tail = nuovo;
  q->size++;
  return 1;

}

//toglie elemento dalla coda
item dequeue(struct Queue *q)
{

 if (q == NULL) return NULLITEM;
 
 if (emptyQueue(q)) return NULLITEM;

 item result = q->head->value;

 struct Node *temp = q->head;

 q->head = q->head->next;

 free(temp);

 if (q->head == NULL)
 {
  q->tail = NULL;
 }

 q->size--;

 return result;
  


}