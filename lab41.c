#include <stdio.h>
#include <string.h>
#include <math.h>

char toValue(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');  //convert number to char 
    else
        return (char)(num - 10 + 'A');
}
 

void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
 

char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0;  
    while (inputNum > 0)
    {
        res[index++] = toValue(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
    strev(res);
    return res;
}
 
int main()
{  

    int inputNum ,i, base, fromnum, tonum;
    printf("Enter Number which you would like to convert to another base:");
    scanf("%i",&inputNum);
    printf("Enter base to which you would like to convert:");
    scanf("%i",&base);
    char res[100];
    fromnum= pow(10,inputNum-1);
    tonum= pow(10,inputNum);
    for (i=fromnum;i<tonum;i++)
    printf("Equivalent of %d in base %d is "
           " %s\n", i, base, fromDeci(res, base, i));
    return 0;
}