/*WAP to enter three numbers and print it in descending order*/
#include <stdio.h>

int main()
{	
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	int sum=a+b+c;
	int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	int min=(a<b)?((a<c)?a:c):((b<c)?b:c);	
	printf("In descending order:%d,%d,%d",max,sum-max-min,min);
	return 0;
}
