/*WAP to enter a range and a size and print according to the size 
 * the numbers between the range for example
 * range->10-20		size->4
 * 10 11 12 13
 * 14 15 16 17
 * 18 19 20		*/
#include <stdio.h>

int main()
{
	int a,b,n,count;
	printf("Enter the range:");
	scanf("%d%d",&a,&b);
	printf("Enter the size:");
	scanf("%d",&n);
	for(int i=a;i<=b;i++)
	{
		if(count%n==0)
		{
			printf("\n");
		}
		printf("%d ",i);
		count+=1;
	}
	return 0;
}
