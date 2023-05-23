#include <stdio.h>
#include <string.h>
#define SIZE 100
typedef struct
{
  long ID;
  int chapter;
  char content[50];
}Question;

void InputQuestion(Question a[],int n)
{
	for (int i=0;i<n;i++)
	{
	a[i].ID=i+1;
	do{
	printf("Please enter Chapter an Content of Question %d ID: ",i+1);
	scanf("%d %[^\n]",&a[i].chapter,a[i].content);
	while(getchar()!='\n');
	if (a[i].chapter<1||a[i].chapter>20) printf("Must be from 1 to 20\n");
	if (strlen(a[i].content)>50) printf("Content must be < 50 characters!\n");
	}while(a[i].chapter<1||a[i].chapter>20||strlen(a[i].content)>50);
	}
	printf("+================================================================================+\n");
  	printf("|%-9s%-19s%-52s|\n","ID","Chap","Content");
  	for (int i=0;i<n;i++)
    	{
      		printf("|%-9ld%-19d%-52s|\n",a[i].ID,a[i].chapter,a[i].content);
    	}
  	printf("+================================================================================+\n");
}	
void Search(Question a[],int n)
{
  long p;
  printf("Please enter Question ID that you want to find (from 1 to %d): ",n);
  scanf("%ld",&p);
  long x=0;
  for (int i=0;i<n;i++){
    if(p==a[i].ID)
      {
        printf("Content of Question %d is %s\n",i+1,a[i].content);
	x++;
      }
  }
  if (x==0) printf("ID not found\n");
}

void Add(Question a[],int *x)
{
	int n=*x;
	a[n].ID=n+1;
	do{
	printf("Please enter Chapter an Content of Question %d ID: ",n+1);
	scanf("%d %[^\n]",&a[n].chapter,a[n].content);
	while(getchar()!='\n');
	if (a[n].chapter<1||a[n].chapter>20) printf("Must be from 1 to 20\n");
	if (strlen(a[n].content)>50) printf("Content must be < 50 characters!\n");
	}while(a[n].chapter<1||a[n].chapter>20||strlen(a[n].content)>50);
	printf("+================================================================================+\n");
  	printf("|%-9s%-19s%-52s|\n","ID","Chap","Content");
  	for (int i=0;i<n+1;i++)
    	{
      		printf("|%-9ld%-19d%-52s|\n",a[i].ID,a[i].chapter,a[i].content);
    	}
  	printf("+================================================================================+\n");
}	

void Count(Question a[],int n)
{
	int count=1;
	printf("%-10s%-10s\n","Chap","Count");
	for (int i=0;i<n-1;i++)
	{
		if(i>1)
			{if(a[i].chapter==a[i-1].chapter) break;
			for (int j=i+1;j<n;j++)
			{	
			if (a[i].chapter==a[j].chapter) 
			count++;
			}
		printf("%-10d%-10d\n",a[i].chapter,count);}
		count=1;
			
		for (int j=i+1;j<n;j++)
		{	
			if (a[i].chapter==a[j].chapter) 
			count++;
		}
		printf("%-10d%-10d\n",a[i].chapter,count);
		count=1;
	}
}
int main ()
{
  int choose;
  Question a[SIZE];
  int n=0;
  do
  {
  printf("+====================MENU==================+\n");
  printf("|1. Read                                   |\n");
  printf("|2. Search                                 |\n");
  printf("|3. Add                                    |\n");
  printf("|4. Count                                  |\n");
  printf("|5. Check                                  |\n");
  printf("|6. Stop                                   |\n");
  printf("+====================----==================+\n");
  printf("\nPlease enter your choice: ");
  scanf("%d",&choose);
  if (choose<1||choose>6)
    printf("\nYour choice is invalid, Please choose from 1 to 6\n");
     
  if (choose==1) {
  	do{
  	printf("Please enter the number of Questions: ");
  	scanf("%d",&n); 
  	while(getchar()!='\n');
  	if (n<0||n>SIZE) printf("Must be >0 and <=100!\n");
  	} while(n<0||n>SIZE);
  	InputQuestion(a,n);
  }
  if (choose==2) {
  	Search(a,n);}
  if (choose==3)
  {
  	Add(a,&n);
  	n++;
  }
  if (choose==4)
  {
  	Count(a,n);
  }
  if (choose==5){printf("I can not do it\n");
  if (choose==6){
    printf("\nThank you for using!!!\n");}
  }while (choose!=6);
  return 0;
}

