#include <stdio.h> 
#include <math.h>

int main()
{
  
	int n;
	int a = 234;
    
	do
	{
	printf ("Enter a number between 1 and 10000: ");
	scanf("%i", &n)	;
	if(n<a)
	{
	    printf("your guess is lower than number \n");
	    }
	else if ( n > a)
	{
		printf("your guess i higher than number\n");	
		}
		else 
		{
			printf("you win!!!!!\n");		
			}
		
	} while (n != a);
	

	
	return 0;
}