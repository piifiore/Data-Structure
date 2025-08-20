#include <stdio.h>
#define MAXLEN 100

void bubble_sort(int a[], int n);
void output_array(int a[], int n);
void scambia(int *x, int *y);


int main()
{

int a[MAXLEN] = {5,8,12,1};

  int n = 4;



        
        bubble_sort(a, n);
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

void scambia(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;

}


void bubble_sort(int a[], int n)
{

  int i, j;

  for ( i = 0; i < n - 1; i++)
  {
    for ( j = 0; j < n - i - 1 ; j++)
    {
      if (a[j] > a[j + 1])
      {
        scambia(&a[j], &a[j + 1]);
      }
      
    }
    
  }
  



  



}