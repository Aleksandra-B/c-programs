#include <stdio.h> 
#include <math.h>


int main()
{
  int n,m;
  double a,b,d,af,value;

  
  
  printf("Enter 2 integers and two float numbers:");
  scanf("%d %d %lf %lf", &n, &m, &a, &b);
  d=(a-b)/ (n-m); 
  af= a-d*n +d;
  printf("differenece is %f and the first term is %f \n", d,af);
  printf("arithmetic series between given numbers is: ");
    for ( int i = n; i <= m; i++)
  {
  value= af+(i-1)*d;
  
  printf("%f ", value);
  }
  printf("\n");
  return 0;
}