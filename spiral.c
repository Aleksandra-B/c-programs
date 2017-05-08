#include<stdio.h>
#include<math.h>
int main()
{
int arr[20][20],n,t,i,max=0,index,j;
printf("Enter size of matrix: ");
scanf("%d",&n);
int count=1;
// Number of traversals
int round = ceil((double)n/2);
// For each traversal
for(i=0;i<round;i++)
{
// Topmost row
for(j=i;j<=n-i-1;j++)
{
arr[i][j]=count++;
}
// Rightmost column
for(j=i+1;j<=n-i-1;j++)
{
arr[j][n-i-1]=count++;
}
// Bottommost row
for(j=n-i-2;j>=i;j--)
{
arr[n-i-1][j]=count++;
}
// Leftmost column
for(j=n-i-2;j>i;j--)
{
arr[j][i]=count++;
}
}
// Print array
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",arr[i][j]);
printf("\n");
}
return 0;
}
