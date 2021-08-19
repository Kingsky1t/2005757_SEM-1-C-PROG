/*WAP to enter a number and count the number of digits 
present in it.*/
#include <stdio.h>

int main()
{
	int n,a,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		a=a/10;
		count+=1;
	}
	printf("the number of digits in %d is %d",n,count);
	return 0;
}
