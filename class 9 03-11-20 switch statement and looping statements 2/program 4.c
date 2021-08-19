/*WAP to display all the prime numbers within the range 100 to 2000*/
#include <stdio.h>

int main()
{
	int i=100,j,c;
	printf("ell prime numbers between 200 and 1000 are:");
	while(i<=2000)
	{	
		j=1;c=0;
		while(j<=i)
		{
			if(i%j==0)
			{
				c+=1;
			}
			j++;
		}
		if(c==2)
		{
			printf("%d ",i);
		}
		i+=1;
	}
	return 0;
}
