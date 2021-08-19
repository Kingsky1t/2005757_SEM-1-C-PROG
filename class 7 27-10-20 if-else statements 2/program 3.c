/*WAP to enter two dates and find the difference between the two*/
#include <stdio.h>

int main()
{
	int d1,d2,m1,m2,y1,y2,df,mf,yf;
	printf("enter the first date:");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("enter the second date:");
	scanf("%d%d%d",&d2,&m2,&y2);	
	if(y1>y2)
	{
		if(m1>m2)
		{
			if(d1>d2)
			{
				df=d1-d2;
			}
			else
			{
				--m1;
				d1+=31;
				df=d1-d2;
			}
			mf=m1-m2;
		}
		else 
		{	
			if(d1>d2)
			{
				df=d1-d2;
			}
			else
			{
				--m1;
				d1+=31;
				df=d1-d2;
			}
			--y1;
			m1+=12;
			mf=m1-m2;
		}
		yf=y1-y2;
	}
	else
	{
		if(m2>m1)
		{
			if(d2>d1)
			{
				df=d2-d1;
			}
			else
			{
				--m2;
				d2+=31;
				df=d2-d1;
			}
			mf=m2-m1;
		}
		else 
		{	
			if(d2>d1)
			{
				df=d2-d1;
			}
			else
			{
				--m2;
				d2+=31;
				df=d2-d1;
			}
			--y2;
			m2+=12;
			mf=m2-m1;
		}
		yf=y2-y1;
	}
	if(df==31)
	{
		++mf;
		df=0;
	}
	if(mf>=12)
	{
		++yf;
		mf-=12;
	}
	printf("difference in dates:%d days() %d month(s) %d year(s)",df,mf,yf);
	return 0;
}
