#include<stdio.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("\nenter the value of b:");
    scanf("%d",&b);
    printf("\nenter the value of c:");
    scanf("%d",&c);
    if(a>b)
    {
    printf("a is the greatest");
    }
    if(a>c)
    {
    printf("a is the greatest");
    }
    if(c>b)
    {
    printf("c is the greatest");
    }
    if(b>c)
    {
    printf("b is the grestest");
    }
    getch();
    return 0;
}