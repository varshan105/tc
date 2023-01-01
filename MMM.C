#include<stdio.h>
int main()
{
		int a[2500],n,i,t,j,max=0,c=0,mode=0;
		float s=0,mean,median;
		clrscr();
		printf("enter the number of data:");
		scanf("%d",&n);
		//To get the values in array and sum the same
		for(i=0;i<n;i++)
		{
		printf("\nenter data %d:",i);
	scanf("%d",&a[i]);
	 s+=a[i];
	}
	mean=s/(float)n;
	printf("mean:%f",mean);
	//To arrange the elements in ascending order
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}
	//To find median
	 if(n%2==0)
	{
	median=((a[n/2]+a[(n-1)/2])/2.0);
	}
	else
	{
	median=((a[(n-1)/2]));
	}
	printf("\nMedian is:%.1f",median);
	//To find mode
	for(i=0;i<n;i++)
		{
		t=a[i];
		c=0;
	for(j=0;j<n;j++)
	{
		if(t==a[j])
		c++;
			if(c>max)
			{
				max=c;
				mode=t;
			}
	}
		}
		printf("\nMode is:%d",mode);
		printf("\nCOMPLETED SUCCESSFULLY");
		getch();
		return 0;
}