#include <stdio.h> 
#include <math.h>

int main()
{
	float R;  
	float A;
	float L;
	float S;
	
	printf ("Enter integer: ");
	scanf("%f", &R)	;
	printf ("Enter integer: ");
	scanf("%f", &A);
    L= ((M_PI*A)/180)*R ;
    S= (M_PI*R*R*A)/360;

	printf (" %f\n %f\n",L, S );
	return 0;
}