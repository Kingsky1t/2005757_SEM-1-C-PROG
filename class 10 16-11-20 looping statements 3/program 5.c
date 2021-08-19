/*WAP to input a number and print its binary form.*/
#include <stdio.h>

int main()
{
	int n,bin=1,x=1; 
	printf("enter the number:");
	scanf("%d",&n);
	for(;;)
	{
		x=x*2;
		if(x>n)
		{
			x=x/2;
			n=n-x;
			break;
		}
		else if(x==n)
		{
			n=n-x;
			break;
		}
	}
	
	for(;x!=1;)
	{	
		
		x/=2;
		if(x<=n)
		{
			bin=bin*10+1;
			n=n-x;
		}
		else
		{
			bin*=10;
		}
	}
	printf("binary form:%d",bin);
	return 0;
}
