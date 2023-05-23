#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkspace(char str[])
{
    int b;
    int i=0,count=0;
    while (str[i]!='\0')
    {
        if(str[i]==' ') count++;
        i++;
    }
    return count;
}
int main ()
{
    char str[100];
    printf("Please enter your string: ");
    scanf("%[^\n]",str);
    printf("Your string is: %s\n",str);
    printf("Number of blank characters of your string is: %d\n", checkspace(str));
}
