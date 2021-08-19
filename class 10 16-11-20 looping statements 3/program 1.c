/*WAP to print 1->20 and 20->1 using for loop.*/
#include <stdio.h>

int main()
{
	for(int i=1;i<=20;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(int i=20;i>=1;i--)
	{
		printf("%d ",i);
	}
	return 0;
}
