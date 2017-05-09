#include<stdio.h>
//function to find gcd of given numbers 
int gcd (int a , int b){
	int c;
	while (a != 0){
		c= a;
		a = b%a;
		b=c;
		
	} return b;
}
 //main function to collect array
int main() {
 int arr1[100],  res[1000];
 int i,j, n1;
 
 printf("\nEnter number of elements in array :");
 scanf("%d", &n1);
 for (i = 0; i < n1; i++) {
 scanf("%d", &arr1[i]);
 }
 
 
 i = 0;
 j= 0;

 
 
for (i =0 ;i < n1;i++) {
 for (j=i+1;j<n1; j++) {
 //if((arr1[i]>arr1[j] && (arr1[i]%arr1[j] !=0) ) ||(arr1[j]>arr1[i] && arr1[j]%arr1[i] !=0))
 if (gcd (arr1[j], arr1[i]) == 1)
  {
 	printf("%i and %i are co-prime\n", arr1[i],arr1[j]);
 	break;
 }
 }
 }
 return 0; }s