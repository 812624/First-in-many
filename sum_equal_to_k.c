#include<stdio.h>
void find_elements(int a[],int n,int k)
	{
			int i,l,r,sum=0;
			for(i=0;i<n-2;i++)
			{
				l=i+1;
				r=n-1;
				while(l<r)
				{
					sum=0;
					sum=a[i]+a[l]+a[r];
					if(sum==k)
					{
						printf("%d %d %d",a[i],a[l],a[r]);
						return;
					}
					else if(sum<k)
							l++;
					else
							r--;
				}
			}
		}					
void quick_sort(int a[],int l,int r)
{
	int piv,i,j,tmp;
	if(l<r)
	{
		piv=l;
		i=l;
		j=r;
		while(i<j)
		{
			while(a[i]<=a[piv]&&i<r)
							i++;
			while(a[j]>a[piv])
							j--;
			if(i<j)
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		tmp=a[piv];
		a[piv]=a[j];
		a[j]=tmp;
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,r);
	}
}									
int main()
{
	int n,i,a[10],k;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
			quick_sort(a,0,n-1);
	find_elements(a,n,k);
	return 0;
}		
