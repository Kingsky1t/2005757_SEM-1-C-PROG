/*WAP to input a 3 or 4 or 5 digit number
and print its middle digit*/
#include <stdio.h>

int main()
{
	int n,mid=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>99 && n<1000)
	{
		mid=(n/10)%10;
	}
	else if(n>999 && n<10000) 
	{
		mid=(n/10)%100;
	}
	else if(n>9999 && n<100000)
	{
		mid=(n/100)%10;
	}
	printf("middle digit is: %d",mid);
	return 0;
}
