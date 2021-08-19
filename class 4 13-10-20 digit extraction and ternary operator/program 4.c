/*WAP to find the secong higesht number among 3 
numbers*/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	int m=(a>b)?(a<c)?a:c:(b<c)?b:c;
	printf("Second higest number is %d",m);
	return 0;
}
	
