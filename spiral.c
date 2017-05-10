#include<stdio.h>
#include<math.h>
int main()
{
int arr[20][20],n,t,i,max=0,index,j;
printf("Enter size of matrix: ");
scanf("%d",&n);
int count=1;

int round = ceil((double)n/2);

for(i=0;i<round;i++)
{
for(j=i;j<=n-i-1;j++)
{
arr[i][j]=count++;
}
// Right column
for(j=i+1;j<=n-i-1;j++)
{
arr[j][n-i-1]=count++;
}
// Bottom row
for(j=n-i-2;j>=i;j--)
{
arr[n-i-1][j]=count++;
}
// Left column
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
