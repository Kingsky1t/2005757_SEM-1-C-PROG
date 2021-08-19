/*WAP to input a number and print its absolute value*/
#include <stdio.h>

int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		n=n-2*n;
	}
	printf("the absolute value is %d",n);
	return 0;
}
