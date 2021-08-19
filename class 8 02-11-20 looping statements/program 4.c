/*WAP to calculate sum where sum=1/1+1/2+1/3+...+1/n*/
#include <stdio.h>

int main()
{
	int n;
	float sum=0.0;
	printf("enter the value of n:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		sum+=(1.0/i);
		i+=1;
	}
	printf(" the value of the series is %f",sum);
	return 0;
}
