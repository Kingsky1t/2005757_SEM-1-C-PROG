/*WAP  to calculate sum where sum=1/0!+1/1!+1/2!+1/3!+.....+1/n!*/
#include <stdio.h>

int main()
{
	int n,f=1;
	float sum=1.0;
	printf("enter the value of n:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		f=f*i;
		sum+=(1.0/f);
		i++;
	}
	printf("the sum is %f",sum);
	return 0;
}
