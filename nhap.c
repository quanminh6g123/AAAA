#include <stdio.h>

typedef struct athlete
{
    int id;
    char Nation[3], Name[30];
    float R[3];
} athle;

void Enterinform(int n, athle ath[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter id of athlete no %d ", i + 1);
        scanf("%d", &ath[i].id);
        fflush(stdin);
        printf("Enter name of athlete no %d ", i + 1);
        gets(ath[i].Name);
        printf("\n");
        printf("Enter nation of athlete no %d ", i + 1);
        scanf("%s", ath[i].Nation);
    }
     printf("=====================================\n");
     printf("%-2s\t%-6s\t%-30s\t%-4s\t%-4s\t%-4s\t%-4s\n","ID","Nation","Name","R1","R2","R3","FR");
     for(int i=0;i<n;i++){
         printf("|%-2d\t%-6s\t%-30s\t\t\t\t|\n",ath[i].id,ath[i].Nation, ath[i].Name);
     }
     printf("=====================================");
}

int main()
{
    athle ath[100];
    int num;
    do
    {
        printf("Enter the number of athletes (number should be smaller than 21) ");
        scanf("%d", &num);

    } while (num > 20);
    Enterinform(num, ath);
}