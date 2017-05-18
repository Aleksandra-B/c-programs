#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <strings.h>
#include <string.h>
#define _GNU_SOURCE


void *decode(char *str)
{
	char *str1;
	int l,i,j;
	l= strlen(str);
	str[l-1]='0';
	str[0]=str1[0];
	i=4;
	j=1;
	while(str[i]!= '0'){
		if (i%3==1){
			str[i]=str[j];
			i++;
			j++;
		}
	}
	return (str1);
}



int main() 
{
char *st1;
char *u;
printf("Enter string:");
gets(st1);
u=decode(st1);
puts(u);
  return 0 ;
}
