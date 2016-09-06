#include<stdio.h>
int main()
{
	int hh,mm,ss;
    char m[2];
	scanf("%d%d%d%s",&hh,&mm,&ss,m);	
	if((hh==12) && (m[0]==65))
	{
		printf("%d: %d: %d",12-hh,mm,ss);
	}
	else if((hh<12)&& (m[0]==65))
	{
		printf(" %d: %d: %d",hh,mm,ss);
	}
	else if(hh==12 && m[0]==80)
	{
		printf("%d:%d:%d",hh,mm,ss);
	}
	else if(hh<12 && m[0]==80)
	{
		printf("%d: %d: %d",12+hh,mm,ss);
	}
return 0;
}				
