#include <stdio.h> 
#include <math.h>

int main()
{
  
	float a;
	int n;
    float x = 1;
    int one =1;
	
	printf ("Enter float number: ");
	scanf("%f", &a)	;
	printf ("Enter integer,which would be power of float numbers : ");
	scanf("%i", &n);
	
    if (n>0){
    
    while(n !=0){
    	x *=a;
    	--n;
    }
    }
    else {
    n= - n;
    	while(n !=0){
    	x /=a;
    	--n;}
    }
    printf("%f\n", x);
}