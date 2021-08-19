/*WAP to print 1-100 and 100-1*/
#include <stdio.h>

int main()
{
	printf("printing from 1-100\n");
	int i=1;
	while(i<=100)
	{
		printf("%d,",i);
		i+=1;
	}
	printf("\nprinting from 100-1\n");
	i=100;
	while(i>=1)
	{
		printf("%d,",i);
		i-=1;
	}
	return 0;
}
