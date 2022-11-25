#include<stdio.h>
int main()
{
    int a,b;
    clrscr();
    printf("enter first number:");
    scanf("%d",&a);
    printf("\nenter second number:");
    scanf("%d",&b);
    if(a>b)
    {
    printf("first number is greater");
    }
    if(b>a)
    {
    printf("second number is greatest");
    }
    getch();
    return 0;
}