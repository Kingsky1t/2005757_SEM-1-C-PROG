/*WAP to input a number and check whether its 
reverse is same with the number or not without using any loops*/
#include <stdio.h>

int main()
{
	int a,d=0,n,rev=0;
	printf("enter a four digit number:");
	scanf("%d",&n);
	printf("0=false\n1=true\n");
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
	int c=(rev==n)?0:1;
	printf("%d",c);
	return 0;
}
