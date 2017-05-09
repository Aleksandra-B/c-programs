#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int f,s, number;    
printf ("Enter a number: ");
scanf("%i", &number)	;

int size = log10(number) + 1;
int arr[size]; 
int arr1[size];
int i = size;
int j= size;
for (int j =0; j<size;j++) arr1[j]= j+1;
f=number;
while(i >= 0)
{
    arr[--i] = number%10;
    number /= 10;
}

printf("number has %i digits s\n",size);
printf("%i=",f);
  for(i=0,j=(size-1); i<(size-1);i++,j-- )
 //if(arr[i]==0)   	i++,j--;

 printf("%i^%i+ ",arr[i],arr1[j]);
  printf("%i",arr[size-1]);
  printf("\n");
    }