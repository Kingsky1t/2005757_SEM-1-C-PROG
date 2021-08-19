/*WAP to find all the numbers within the range 100 to 2000 
such that its reverse is equal to the original number*/
#include <stdio.h>

int main()
{
	int i=100,a,d,rev;
	printf("ell numbers which are equal to its reverse between 200 and 1000 are:");
	while(i<=2000)
	{
		a=i;d=rev=0;
		while(a!=0)
		{
			d=a%10;
			a=a/10;
			rev=rev*10+d;
		}
		if(rev==i)
		{
			printf("%d ",i);
		}
		i+=1;
	}
	return 0;
}
