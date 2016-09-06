#include<stdio.h>
int main()
{
	int n,i,j,a[10],tmp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		 for(j=i;j>0;j--)
		 {
			 if(a[j]<a[j-1])
			 {
				 tmp=a[j];
				 a[j]=a[j-1];
				 a[j-1]=tmp;
			 }
	     }
    }
    for(i=0;i<n;i++)
    {
		printf("%d",a[i]);
	}
return 0;
}		 
			 	 	
