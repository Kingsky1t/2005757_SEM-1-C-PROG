/*WAP to enter a number and display all its digits using while loop.*/
#include <stdio.h>

int main()
{
	int n,a,d=0;
	printf("Enter the number:");
	scanf("%d",&n);
	a=n;
	printf("the digits are:");
	while(a!=0)
	{
		d=a%10;
		a=a/10;
		printf("%d ",d);
	}
	return 0;
}
