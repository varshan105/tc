// c program to find area of a triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int l,b,h,s;
    float area;
    clrscr();
    printf("enter the value of l:");
    scanf("%d",&l);
    printf("\nenter the value of b:");
    scanf("%d",&b);
    printf("\nenter the value of h:");
    scanf("%d",&h);
    s=(l+b+h)/2.0;
    area=sqrt(s*(s-l)*(s-b)*(s-h));
    printf("\narea of the triangle is:%f",area);
    scanf("%f",&area);
    getch();
    return 0;
}