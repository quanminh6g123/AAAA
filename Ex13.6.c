#include <stdio.h>
#include <string.h>
int main ()
{
    char s[5][100]={"TV127 31 inch Television", "CD057 CD Player", "TA877 Answering Machine", "CS409 Car Stereo", "PC655 Personal Computer"};
    char s1[50];
    char *f=NULL;
    int i,count=0;
    printf("Please enter a part of product that you want to find: ");
    scanf("%[^\n]",s1);
    for (i=0;i<5;i++)
    {
        f=strstr(s[i],s1);
        if (f!=NULL) 
        {
            printf("Product that you want to find is: %s\n",s[i]);
            ++count;
        }
    }
    if (count==0) printf("Cannot find your product!\n");
    return 0;
}
