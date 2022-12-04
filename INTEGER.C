#include<stdio.h>
int main()
{
    int a;
    clrscr();
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0)
    {
    printf("The number is a positive integer");
    }
    if(a<0)
    {
    printf("The number is a negative integer");
    }
    if(a==0)
    {
    printf("The number is zero");
    }
    getch();
    return 0;
}