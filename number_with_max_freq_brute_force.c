#include<stdio.h>
int main()
{
	int n,a[10],max=0,c=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i;j<n;j++)
		{
			if(a[i]%a[j]==0)
			{
				c++;
			}
		}
	    if(c>max)
     	{
			max=a[i];
		}
    }
    printf("%d",max);
 return 0;
}    					
