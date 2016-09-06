#include<stdio.h>
int main()
{
	int n,i,a[20],b[20],j,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b[i]=0;
	}	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		b[a[j]]++;
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}		
	}
	printf("%d",max);
return 0;
}
