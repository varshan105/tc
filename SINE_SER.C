#include<stdio.h>
int main()
{
	int i,n;
	float x,sum,t;
	clrscr();
	printf("enter the value of x:");
	scanf("%f",&x);
	printf("enter the value of n:");
	scanf("%d",&n);
	x=x*3.14159/180;
	t=x;
	sum=x;
	for(i=1;i<=n;i++)
	{
		t=(t*(-1)*x*x)/(2*i*(2*i+1));
		sum+=t;
	}
	printf("the value of sin(%f)=%.4f",x,sum);
	getch();
	return 0;
}