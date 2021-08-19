/*WAP to enter a five digit number and print the digits in
 * forward direction and backward direction in each line.*/
#include <stdio.h>

int main()
{
	int n,a,rev=0;
	printf("enter a 5 digit number:");
	scanf("%d",&n);
	a=n;
	printf("%d\n",a%10);
	rev=rev*10+(a%10);
	a=a/10;
	printf("%d\n",a%10);
	rev=rev*10+(a%10);
	a=a/10;
	printf("%d\n",a%10);
	rev=rev*10+(a%10);
	a=a/10;
	printf("%d\n",a%10);
	rev=rev*10+(a%10);
	a=a/10;
	printf("%d\n",a%10);
	rev=rev*10+(a%10);
	printf("---------\n");
	a=rev;
	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);
	return 0;
}
