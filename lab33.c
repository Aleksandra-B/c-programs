#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
unsigned char  *ar1=NULL;

unsigned char *GenArray (int n, int a, int b)
{
int i;
ar1=(unsigned char *)malloc(n* sizeof(unsigned char));
for (i=0;i<n;++i){
	ar1[i]= rand()%(b+1-a)+a;
	}
	return ar1;
}

void SortArray (unsigned char *arr, int len)
{
  int i, j,q,w,e;
  q=0;
  w=0;
  e=0;
  for (i = 0; i < len; i++)
      {
      if (arr[i] == 1)
	  q++;
      if (arr[i] == 2)
	  w++;
      if (arr[i] == 3)
	  e++;
      }

  for (j = 0; j < q; j++)
       arr[j] = 1;
  for (j = q; j < (w+q); j++)
       arr[j] = 2;
  for (j = (w+q); j < len; j++)
       arr[j] = 3;

  return 0;
}




int main()
{
  int n, i,k;
  k=0;

  printf("Enter length of array : ");
  scanf("%d", &n);

  ar1 = GenArray (n, 1, 3);
  for (i = 0; i < n; i++)
      printf ("%d ", ar1[i]);
      printf ("\n");

  SortArray (ar1, n);
  for (k = 0; k < n; k++)
      printf ("%d ", ar1[k]);


  free(ar1);

  return 0;
}
