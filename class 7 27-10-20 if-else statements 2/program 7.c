/*WAP to enter a number and find its rounded off number
nearest to one digit or two digit according to user's
choice*/
#include <stdio.h>

int main()
{
	int n,i,d;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("enter 1 for rounding off to first place and enter 2 for rounding off 2 digits;");
	scanf("%d",&i);
	if(i==1)
	{	
		d=n%10;
		n=n/10;
		if(d>=5)
		{
			n+=1;
			n*=10+0;
		}
		else
		{
			n=n*10;
		}
		printf("rounded off number is %d",n);	
	}
	else if(i==2)
	{
		d=n%100;
		n=n/100;
		if(d>=50)
		{
			n+=1;
			n*=100;
		}
		else
		{
			n=n*100;
		}
		printf("rounded off number is %d",n);
	}	
	else
	{
		printf("stupid,<flying chappal recieved>");
	}
	return 0;
}
