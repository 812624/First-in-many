#include<stdio.h>
int main()
{
	int a[10],n,i,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=c^a[i];
	}
	printf("%d",c);
	return 0;
}			
