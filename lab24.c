#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int f,s, number;    
printf ("Enter a number: ");
scanf("%i", &number)	;

int size = log10(number) + 1;
int arr[size]; 
int i = size;
f=number;
while(i >= 0)
{
    arr[--i] = number%10;
    number /= 10;
}

printf("number has %i digits \n",size);
printf("%i=",f);

if(size ==1)
 printf ("%i\n ", arr[size-1]); 
 if (size==2 )
 {
 printf ("%i*10 ", arr[size-2]);
 if (arr[size-1] != 0)
 printf("+%i\n ", arr[size-1]);
 }
  
 if (size > 2)
 {
 	printf("%i*10^%i ", arr[0], size);
 	for (i= size-2; i>1; i--){
 		if (arr[size-(i+1)] != 0)
 		printf("+ %i*10^%i ", arr[size-(i+1)], i);
 		
 	}
 	if (arr[size-2] !=0 )
 	printf("+%i*10 ", arr[size-2]);
 	if (arr[size-1] !=0 )
 	printf("+%i\n", arr[size-1]);
 	
 	  }
    return 0;
     }