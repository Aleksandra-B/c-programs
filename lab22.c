#include <stdio.h> 
#include <math.h>


int main()
{
  int n,m;
  double a,b,d,af,value;

  
  
  printf("enter 2 integer and two float numbers:");
  scanf("%d %d %lf %lf", &n, &m, &a, &b);
  d=(a-b)/ (n-m); 
  af= a-d*n +d;
  for ( int i = n; i <= m; i++)
  {
  value= af+(i-1)*d;
  
  printf("%f ", value);
  }
  printf("\n");
  return 0;
}