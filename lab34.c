#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <strings.h>
#include <string.h>


char *func(char *str,int num)
{
int l,i;//given string
char *str1 = (char *) malloc (num+1);//new string
l= strlen(str);//length of string
  if (num<=l){
 for(i=0;i<num;i++)
 str1[i]=str[i];
 }
 if (num>l){
 	for(i=0;i<l;i++)
 	  str1[i]=str[i];
 	for (;i<num;i++)
 	  str1[i]= '*';
 }
 str1[i]=0;
 return(str1);
}

int main()
{
char st1[80];
int len,n,i;
char *u;
printf("Enter string:");
gets(st1);
puts(st1);
printf("Enter integer:");
scanf("%i", &n);
len=strlen(st1);
printf("length of the string is %i\n",len);
u=func(st1, n);
puts(u);

free(u);
  return 0 ;
}
