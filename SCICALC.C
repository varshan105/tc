#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    char op;
    clrscr();
    printf("enter first value:");
    scanf("%d",&a);
    printf("\nenter second value:");
    scanf("%d",&b);
    printf("\nenter the operator:");
    scanf("%s",&op);
    switch(op)
    {
    case'+':
    c=a+b;
    printf("answer:%d",c);
    scanf("%d",&c);
    break;
    case'-':
    c=a-b;
    printf("answer:%d",c);
    scanf("%d",&c);
    case'*':
    c=a*b;
    printf("answer:%d",c);
    scanf("%d",&c);
    break;
    case'/':
    c=a/b;
    printf("answer:%d",c);
    scanf("%d",&c);
    break;
    case'%':
    c=a%b;
    printf("answer:%d",c);
    scanf("%d",&c);
    break;
    default:
    printf("invalid input");
    break;
    }
    getch();
    return 0;
}