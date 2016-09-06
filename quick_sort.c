#include<stdio.h>
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
	int num,i,a[10];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,num-1);
	for(i=0;i<num;i++)
	{
		printf("%d",a[i]);
	}	
	return 0;
}		
