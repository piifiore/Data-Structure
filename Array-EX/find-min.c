#include <stdio.h>
#define MAXLEN 100

int min(int a[], int n, int i);
void print_min(int a[], int n);
void delete_from_positin(int a[], int n);

int main(int argc, char *argv[])
{

  int a[MAXLEN] = {12,3,5,6,77,52};
  int n = 6;

  //print_min(a, n);

 delete_from_positin(a, n);

  


return 0;
}


int min(int a[], int n, int i)
{
    int min, j,pmin;

    min = a[i];
    pmin = i;
    

    for (int j = i + 1; j < n; j++)
    {
      if (min > a[j])
      {
        min = a[j];
        pmin = j;
        
      }
    }
    
    return pmin;

}

void print_min(int a[], int n)
{
  int i = 0;
  int pmin = min(a, n, i);

  printf("Il valore minimo é: %d", a[pmin]);
}


/*
  i = indice array originale
  j = posizione da eliminare
  k = indice array copia
  
*/

void delete_from_positin(int a[], int n)
{

  int j;
  int b[MAXLEN];

  printf("che posizione vuoi eliminare?:");
  scanf("%d", &j);

 if (j < 0 || j >= n)
 {
  printf("posizione non valida");
 } else
 {

  if (j < 0 || j >= n) {
        printf("Posizione non valida\n");
    } else {
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (i != j) {
                b[k] = a[i];
                k++;
            }
        }

        printf("Il nuovo array è:\n");
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
 }

}





