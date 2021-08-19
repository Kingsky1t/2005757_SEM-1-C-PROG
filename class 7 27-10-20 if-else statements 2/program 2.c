/*WAP to take two times and find the difference between them*/
#include <stdio.h>

int main()
{
	int h1,h2,m1,m2,hf,mf;
	printf("enter the number in 24-hr format\n");
	printf("enter first time:");
	scanf("%d%d",&h1,&m1);
	printf("enter second time:");
	scanf("%d%d",&h2,&m2);
	if(h1>h2)
	{
		if(m1>m2)
		{
			mf=m1-m2;
		}
		else
		{
			--h1;
			m1+=60;
			mf=m1-m2;
		}
		hf=h1-h2;
	}
	else
	{
		if(m2>m1)
		{
			mf=m2-m1;
		}
		else
		{
			--h2;
			m2+=60;
			mf=m2-m1;
		}
		hf=h2-h1;
	}
	if(mf==60)
	{
		++hf;
		mf=0;
	}
	printf("diff in time:%d hour(s) and %d minute(s)",hf,mf);
	return 0;
}
