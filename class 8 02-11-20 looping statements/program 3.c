/*WAP to input base and power and calculate base raise to power*/
#include <stdio.h>

int main()
{
	int base, power;
	printf("enter the base:");
	scanf("%d",&base);
	printf("enter the power:");
	scanf("%d",&power);
	int i=1,res=1;
	while(i<=power)
	{
		res*=base;
		i+=1;
	}
	printf("the value of %d to the power %d is %d",base,power,res);
	return 0;
}
