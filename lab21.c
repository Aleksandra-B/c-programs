#include <stdio.h> 
#include <math.h>

int main()
{
  
	int n;
	int f1=1;
	int f2=2;
	int r;
    int q;
        
	printf ("Enter a number: ");
	scanf("%i", &n)	;
	printf("%d  %d", f1 ,f2);
	for (r=3; r<= n; r++){
		printf ("%d ", f1+f2);
		q=f1;
		f1=f2;
		f2=q+ f1;
	}
	printf("\n ");
}