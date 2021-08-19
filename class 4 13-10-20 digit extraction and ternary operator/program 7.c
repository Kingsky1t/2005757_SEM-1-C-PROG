/*WAP to enter a four digit number then reverse first
two digits then reverse second two digits
input:1234
output:2143*/
#include <stdio.h>

int main()
{
	int n,a,d,rev=0,num=0;
	printf("enter a number:");
	scanf("%d",&n);
	a=n/100;
	d=a%10;a=a/10;rev=rev*10+d;
	d=a%10;a=a/10;rev=rev*10+d;
	num=rev;
	rev=0;
	a=n%100;
	d=a%10;a=a/10;rev=rev*10+d;
	d=a%10;a=a/10;rev=rev*10+d;	
	num=(num*100)+rev;
	printf("%d",num);
	return 0;
}
