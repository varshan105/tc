#include<stdio.h>
int main()
{
    int a;
    clrscr();
    printf("enter a year in the format(YYYY):");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0 || a%400==0)
    {
    printf("the specified year is a leap year");
    }
    else
    {
    printf("the specifies year is not a leap year");
    }
    getch();
    return 0;
}