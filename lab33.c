#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void *GenArray (int n, int a, int b)
{
int i;
int *arr=NULL;
arr=(int*)malloc(n* sizeof(int));
for (i=0;i<n;++i){
	arr[i]= rand()%(b+1-a)+a;		
	}
	return arr;
}


int main()
{
int q,w,e;
int  n,i,j,k,l;
int *p;
printf("Enter number of elements in array:");
scanf("%i", &n);
p=GenArray(n, 1, 3);
printf("Your array of random numbers, which is not sorted:");
for (i=0;i<n;i++){
   printf("%d ",*(p+i));
		}
q=0;
w=0;
e=0;		   
for (i=0;i<n;i++){
	if (*(p+i)==1)
	q++;
	if (*(p+i)==2)
	w++;
	else {
	e++;
	}
}		   
	printf("\nNumber of insertions of 1,2,3: ")	  ; 
	printf("%i %i %i\n",q,w,e)	;
	printf("\nYour array, which is sorted:")	  ;
	for(j=0;j<q;j++)
	printf("%i ",1);
	for(k=0;k<w;k++)
	printf("%i ",2);
	for(l=0;l<e;l++)
	printf("%i ",3);
	printf("\n")	;
	
	
	return 0 ;
}

