/*WAp to enter a number and print numbers accordingly
 * e.g., 9->1,9,2,8,3,7,4,6,5
 * 		10->1,10,2,9,3,8,4,7,5,6*/
#include <stdio.h>

int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{ 
		printf("%d %d ",i,n+1-i);
	}
	if(n%2!=0)
	{
		printf("%d",i);
	}
	return 0;
}
