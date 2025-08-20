#include <stdio.h>
#define MAXLEN 100

void insertion_sort(int a[], int n);
void output_array(int a[], int n);

int main()
{

int a[MAXLEN] = {5,8,12,1};

  int n = 4;



        
        insertion_sort(a, n);
        printf("\nArray ordinato:\n");
        output_array(a, n); 
  

  



}


void output_array(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", a[i]);
  }
  
}



/*
  i = indice che scorre l'array nella parte non ordinata
  j = indice che scorre l'array nella parte ordianta

*/

void insertion_sort(int a[], int n)
{
  int i , j;
  int elemento_corrente;



  for ( i = 1; i < n; i++)
  {

    elemento_corrente = a[i];

    j = i - 1;

    while (j >= 0 && a[j] > elemento_corrente)
    {
      a[j + 1] = a[j];
      j--;

    }

    a[j + 1] = elemento_corrente;
    

  }
 
    
    
  

}
  

  


