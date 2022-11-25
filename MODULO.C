#include<stdio.h>
int main()
{
    int a;
    clrscr();
    printf("enter a value:");
    scanf("%d",&a);
    if(a%5==0 && a%8==0)
    {
    printf("the number is divisible by both 5 and 8");
    }
    else
    {
    printf("the number is not divisible by 5 and 8");
    }
    getch();
    return 0;
}