/*WAP to input a four digit number and 
print its reverse*/
#include <stdio.h>

int main()
{
	int a,d=0,n,rev=0;
	printf("enter a four digit number:");
	scanf("%d",&n);
	a=n;
	d=a%10;
	a=a/10;
	rev=rev*10+d;
	d=a%10;
	a=a/10;
	rev=rev*10+d;
	d=a%10;
	a=a/10;
	rev=rev*10+d;
	d=a%10;
	rev=rev*10+d;
	printf("reverse of %d is %d",n,rev);
	return 0;
}
