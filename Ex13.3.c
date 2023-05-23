#include <stdio.h>
#include <ctype.h>
#include <string.h>
int checknum(char str[])
{
    int i;
    if (strlen(str)!=7) return 0;
    else 
    {
        for(i=0;i<=2;i++)
        {
            if (isalpha(str[i])==0) return 0;
        }
        for(i=3;str[i]!='\0';i++)
        {
            if (isdigit(str[i])==0) return 0;
        }
    }
    return 1;
}
int main ()
{
    char str[100];
    printf("Please enter your number that you want to check: ");
    scanf("%[^\n]",str);
    while(getchar()!='\n');
    if (checknum(str)==0) printf("/t Invalid Number, Your number have to follow LLLNNNN!\n");
    else printf("Your number is valid!!!\n");
    return 0;
}