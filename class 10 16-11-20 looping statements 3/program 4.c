/*WAP to input a number and print the lower and upper ranges of 
 * power of 2 it lies between e.g., 120 lies between 64 and 128.*/
#include <stdio.h>

int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int x=1;
	for(int i=1;;i++)
	{
		x=x*2;
		if(x>n)
		{
			printf("lower range is %d\n",x/2);
			printf("upper range is %d",x);
			break;
		}
		else if(x==n)
		{
			printf("%d is a power of 2",n);
			break;
		}
		else 
		{
			continue;
		}
	}
	return 0;
}
