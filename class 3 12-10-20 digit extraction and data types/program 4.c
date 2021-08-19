/*WAP a program to enter a five digit and six digit numbers 
and print the middle digits*/
#include <stdio.h>

int main()
{
	int n,digit;
	printf("enter a five digit number:");
	scanf("%d",&n);
	digit=n%1000;
	digit/=100;
	printf("middle digit:%d\n",digit);
	printf("enter a six digit number:");
	scanf("%d",&n);
	digit=n%10000;
	digit/=100;
	printf("middle digits:%d\n",digit);
	return 0;
}
