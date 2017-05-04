#include <stdio.h> 
#include <math.h>

int main()
{
  
	float a;
	int n;
    float x = 1;
	
	printf ("Enter integer: ");
	scanf("%f", &a)	;
	printf ("Enter integer: ");
	scanf("%i", &n);
    while(n){
    	if(n%2) {
    	x *=a;
    	n--;
    	}
    	else{
    		a *= a;
    		n /=2;
    	}
    }

	printf (" %f\n " ,x  );
	return 0;
}