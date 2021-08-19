/*WAp to input a three digit number and check 
whether the square of middle digit iss egual to 
the rest of the digit taken in that order*/
#include <stdio.h>

int main()
{
	int n,a,d,sq,num,check;
	printf("Enter a three digit number:");
	scanf("%d",&n);
	a=n;
	d=a%100;
	d/=10;
	sq=d*d;
	num=(a/100)*10+(a%10);
	check=(num==sq)?1:0;
	printf("%d",check);
	return 0;
}
