/*WAP to enter a number and print its middle digit(s)*/
#include <stdio.h>

int main()
{
	int n,a,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		a=a/10;
		count+=1;
	}
	int i=1,pow=1;
	a=n;
	if(count%2==0)
	{	
		while(i<=(count/2)-1)
		{
			pow*=10;
			i+=1;
		}		
		a/=pow;
		printf("middle digits:%d",a%100);
	}
	else
	{
		while(i<=(count/2))
		{
			pow*=10;
			i+=1;
		}		
		a/=pow;
		printf("middle digits:%d",a%10);
	}
	return 0;
}	
