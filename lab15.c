#include <stdio.h> 
#include <math.h>

int main()
{
	float n;
	float s;
	printf ("Enter an integer: ");
	scanf ("%f", &n);
	if (n<0)
	n=-n;
	printf ("abs of entered number is %f\n",n );
	return 0;
}