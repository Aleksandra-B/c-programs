#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <strings.h>
#include <string.h>
#define _GNU_SOURCE

void *func(char *str,int num)
{
int l,i;//given string
char *str1;//new string
l= strlen(str);//length of string
  if (num<=l){
 for(i=0;i<num;i++) 
 str[i]=str1[i];
 }
 if (num>l){
 	for(i=0;i<l;i++)
 	str[i]=str1[i];
 	for (i=l;i<num;i++)
 	str1[i]= '*';
 }
 return(str1);
}

int main() 
{
char *st1;
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
  return 0 ;
}
