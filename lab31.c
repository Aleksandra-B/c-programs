#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
void minmax (int len, int *arr, int *min, int *max)
{
  int i;
  if (len ==0)
  {
  	*min = INT_MIN;
  	*max= INT_MAX;
  }
  else {
  *min = arr[0];
  *max = arr[0];
  
  for (i = 1; i < len; i++)
  {
    if (*min > arr[i]) *min = arr[i];
    if (*max < arr[i]) *max = arr[i];
  }
}}


int main()
{
  int *arr,num,  min, max, i;
  printf("Enter number of elements in array:");
  scanf("%i", &num);
  for (i=0; i<num; i++) {
  	scanf("%i",&arr[i]);
  }
  
  minmax (num , arr, &min, &max);
  
  printf ("min = %d, max = %d\n", min, max);

  return 0;
}