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
//int *arr= NULL;
int  n,i, a, b;
int *p;
printf("Enter number of elements in array:");
scanf("%i", &n);
printf("Enter numbers a and b:");
scanf("%d%d",&a,&b);
p=GenArray(n, a, b);
   
	for (i=0;i<n;i++){
   printf("%d\n",*(p+i));
		}
				
	return 0 ;
}

