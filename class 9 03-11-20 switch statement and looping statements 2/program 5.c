/*WAP to display all the even numbers whose square is within the 
range of 1000 to 6000*/
#include <stdio.h>

int main()
{
	int i=2,sq;
	printf("all numbers whose square lies between 1000 to 6000 is:\n");
	while(1)
	{
		sq=i*i;
		if(sq>=1000 && sq<=6000)
		{
			printf("%d ",i);
		}
		if(sq>6000)
		{
			break;
		}
		i+=2;
	}
	return 0;
}
