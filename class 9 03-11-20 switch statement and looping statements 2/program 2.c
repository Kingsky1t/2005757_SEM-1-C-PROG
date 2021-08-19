/*WAP to find all the numbers which are divisible 
 * by 3 and 8 between the range 200 to 1000*/
#include <stdio.h>

int main()
{
	int i=200;
	printf("all the numbers divible by 3 and 8 between 200 and 1000 are:\n");
	while(i<=1000)
	{
		if(i%3==0 && i%8==0)
		{
			printf("%d ",i);
		}
		i+=1;
	}
	return 0;
}

