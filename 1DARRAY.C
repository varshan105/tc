#include<stdio.h>
#include<conio.h>
int main()
{
	char name[40];
	int a[5];
	int i,sum=0;
	clrscr();
	printf("enter student name:");
	scanf("%c",&name);
	for(i=0;i<5;i++)
	{
		printf("\nenter the mark:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("\nsum is : %d",sum);
	getch();
	return 0;

}