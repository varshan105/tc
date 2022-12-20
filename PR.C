#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int marks[5];
    int i,n,sum=0;
    clrscr();
    printf("Enter student name:");
    scanf("%s",name);
    printf("\nEnter the mark details");
    for(i=0;i<5;++i)
    {
    printf("\nenter marks[%d]:",i+1);
    scanf("%d",&marks[i]);
    sum+=marks[i];
    }
    printf("sum=%d",sum);
    getch();
    return 0;
}
