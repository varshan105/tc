#include<stdio.h>
int main()
{
	int a[]={5,35,5,31,56};
	int size=sizeof(a)/sizeof(int);
	int min=0;
	int t=0,i=0,j=0;
	clrscr();
	printf("\ngiven array:");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}
	printf("\nsorted array:");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	getch();
	return 0;
}
