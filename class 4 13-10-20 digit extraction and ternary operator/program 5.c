/*WAP to print the smallest among four numbers*/
#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("enter four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int m=(a<b)?((a<c)?((a<d)?a:d):((c<d)?c:d)):((b<c)?((b<d)?b:d):((c<d)?c:d));
	printf("%d",m);
	return 0;
}
