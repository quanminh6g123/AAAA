#include <stdio.h>
#define SIZE 100

struct Date
{
    int day;
    int month;
    int year;
};
void inputdate(struct Date *d)
{
    do
    {
        printf("Please enter day of Date: ");
        scanf("%d", &d->day);
        if (d->day < 0 || d->day > 31)
            printf("\nInvalid value!!!, Please enter again");
    } while (d->day < 0 || d->day > 31);
    
    do
    {
        printf("Please enter month of Date: ");
        scanf("%d", &d->month);
        if (d->month < 0 || d->month > 31)
            printf("\nInvalid value!!!, Please enter again");
    } while (d->month < 0 || d->month > 12);
    printf("Please enter year of Date: ");
    scanf("%d", &d->year);
}

int datecmp(struct Date *d1, struct Date *d2)
{
    if(d1->year>d2->year) return 1;
    else if(d1->year<d2->year) return -1; 
    else if(d1->year==d2->year)
    {
        if (d1->month>d2->month) return 1;
        else if (d1->month<d2->month) return -1;
        else if (d1->month==d2->month)
        {
            if (d1->day>d2->day) return 1;
            else if (d1->day<d2->day) return -1;
            else return 0;
        }
    }
}
int main()
{
    struct Date d1,d2;
    printf("Please enter first Date!!! \n");
    inputdate(&d1);
    printf("Please enter second Date!!! \n");
    inputdate(&d2);
    if (datecmp(&d1,&d2)==1)printf("%d/%d/%d is before %d/%d/%d \n",d2.day,d2.month,d2.year,d1.day,d1.month,d1.year);
    if (datecmp(&d1,&d2)==-1)printf("%d/%d/%d is before %d/%d/%d \n",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
    if (datecmp(&d1,&d2)==0)printf("%d/%d/%d is identical %d/%d/%d \n",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
    return 0;
}
