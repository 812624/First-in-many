#include<stdio.h>
int majority(int a[],int n)
{
	int c=0,maj,i;
	for(i=0;i<n;i++)
	{
		if(c==0)
		{
			maj=a[i];
			c=1;
		}
		else if(maj==a[i])
			c++;
		else
			c--;
	}
	if(c!=0)
	{
		c=0;
		for(i=0;i<n;i++)
		{
			if(maj==a[i])
			{
				c++;
			}
		}
		if(c>n/2)
			return maj;
		else
			return	0;						
	}
}		
int main()
{
	int n,a[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",majority(a,n));
	return 0;
}		
