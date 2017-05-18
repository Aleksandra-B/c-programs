#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
char stringdecoded[100];
char stringcoded[300];

char *DecodeString (char *str)//function to decode given string
{
  int l, i, j;
  l = strlen(str);
  char *new;
  if (l == 0 || l == 1)
      new = strdup(str);
      else {
              new= (char *)malloc(l+1);
              for(i = 0, j = 0; i < l; i = i+3, j++)
                new[j] = str[i];
                new[l/3+1] = '\0';  //add terminator
           }
  return new;
}

char *CodeString (char *str)//function to code given .string 
{
  int l, i, j;
  l = strlen(str);

  char *new1;
  if (l == 0 || l == 1)
      new1 = strdup(str);
      else {
            new1 = (char *)malloc(3*l+1);
              for(i = 0, j = 0; i < l-1; i++, j=j+3)
                {   new1[j] = str[i];
                    new1[j+1] = rand() % 96 + 32;
                    new1[j+2] = rand() % (127-32+1) + 32;
                }
                  new1[3*(l-1)] = str[l-1];
                  new1[3*(l-1)+1] = '\0';
           }
  return new1;
}
int main()  //main function to code and decode given strings 
{
    
    printf("Enter string, which you would like to code: ");
    gets(stringdecoded);
    printf("Enter string, which you would like to decode: ");
    gets(stringcoded);
    char *cod = CodeString(stringdecoded);
    char *dec = DecodeString (stringcoded);
    printf("Your coded string: %s\n", cod);
    printf("Your decoded string is : %s\n", dec);
    free(cod);
    free(dec);
    return (0);
}
