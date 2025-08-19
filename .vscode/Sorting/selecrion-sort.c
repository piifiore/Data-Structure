#include <stdio.h>
#define MAXLEN 100

//function prototype
void input_array(int a[], int n);
void output_array(int a[], int n);
void scambia(int *x, int *y);
int min(int a[], int i, int n);
void selection_sort(int a[], int n);

/*Study of a selection sorting algorithm and testing*/

int main (int argc, char *argv[]){

  int a[MAXLEN];
  
  int n;

  printf("dammi la lunghezza della lista di numeri:");
  scanf("%d", &n);

  if (n <= 0 || n > MAXLEN)
  {
    printf("il numero deve essere positivo e non deve superare %d", MAXLEN);
  } else
  {
        input_array(a, n);
        selection_sort(a, n);
        printf("\nArray ordinato:\n");
        output_array(a, n); 
  }
  
  

  return 0;



}


// Dati in ingresso: sequanza s di interi i
// Precondizione: interi i positivi, avere la lunghezza di n
// Postcondizione: array a popolato da s con una lunghezza n data da i-1
// Dati in usicta: none

/*
s = sequanza di di numeri interi input
a = array 
i = intero positvo
n = lunghezza di a 
*/

void input_array(int a[],int n)
{

   for(int i = 0; i < n; i++) {
        printf("Elemento di posizione %d :", i); 
        scanf("%d", &a[i]);
    } 

}

// Dati in ingresso: array a di interi
// Precondizione: n > 0
// Postcondizione: none
// Dati in usicta: array a

void output_array(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d", a[i]);
  }
  
}



void scambia(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;

}

int min(int a[], int i, int n)
{

  int j, min, pmin;

  min = a[i];
  pmin = i;

  for ( j = i + 1; j < n; j++)
    {
      if (a[j] < min)
      {
        min = a[j];
        pmin = j;
      } 
    
    }
      return pmin;
  
}


// Dati in ingresso: array a di interi
// Precondizione: n > 0
// Postcondizione: tutti gli elemti di a siano ordinati
// Dati in usicta: array a ordinato
void selection_sort(int a[], int n)
{

  int p;
  for (int  i = 0; i < n - 1; i++)
  {
    p = min(a,i,n);
    scambia(&a[i], &a[p]);

  }
  
}