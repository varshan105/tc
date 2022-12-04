#include<stdio.h>
int main()
{
    int a;
    clrscr();
    printf("enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("The number is even");
    }
    else
    {
    printf("The number is odd");
    }
    getch();
    return 0;
}