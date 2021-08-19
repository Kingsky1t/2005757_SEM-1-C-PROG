/*WAP to swap two numbers using a third variable 
and wuthout using a third variable*/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Two numbers after swapping are: %d and %d\n",a,b);
	
	a=b=0;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Two numbers after swapping are: %d and %d\n",a,b);
	return 0;
}
