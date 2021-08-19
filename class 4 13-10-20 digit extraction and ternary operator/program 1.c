/*WAP to find the greatest number between two numbers*/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=(a>b)?a:b;
	printf("the greatest between %d and %d is %d",a,b,c);
	return 0;
}
