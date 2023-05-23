#include <stdio.h>
#include <string.h>

int strend(char s[],char t[])
{
    int i;
    if (strlen(t)>strlen(s)) return 0;
    for (i=0;t[i]!='\0';i++)
    {
        if (t[i]!=s[strlen(s)-strlen(t)+i]) return 0;
    }
    return 1;
}
int main ()
{
    char s[100],t[100];
    printf("Please enter string s: ");
    scanf("%[^\n]",s);
    while(getchar()!='\n');
    printf("Please enter string t: ");
    scanf("%[^\n]",t);
    if (strend(s,t)==0) printf("t ko nam o cuoi s\n");
    else printf("t nam o cuoi s\n");
    return 0;
}
