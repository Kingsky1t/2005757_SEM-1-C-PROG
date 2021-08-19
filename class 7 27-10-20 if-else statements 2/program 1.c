/*WAP to enter the price of three items and apply discount as per the table
total>5000 discount-50% and if price of one item>3000 discount-60%
total>4000 discount-30% and if price of one item>2000 discount-40%
total>2000 discount-20%
*/
#include <stdio.h>

int main()
{
	int a,b,c,sum;
	float dis;
	printf("Enter three prices:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum>5000)
	{
		if(a>3000||b>3000||c>3000)
		{
			dis=sum*0.6;
		}
		else 
		{
			dis=sum*0.5;
		}
	}
	else if(sum>4000)
	{
		if(a>2000||b>2000||c>2000)
		{
			dis=sum*0.4;
		}
		else 
		{
			dis=sum*0.3;
		}
	}
	if(sum>2000)
	{
		dis=sum*0.2;
	}
	else
	{
		dis =0.0;
	}
	printf("total sum:%d\n",sum);
	printf("total discount:%f\n",dis);
	printf("price after discount:%f",sum-dis);
	return 0;
}
