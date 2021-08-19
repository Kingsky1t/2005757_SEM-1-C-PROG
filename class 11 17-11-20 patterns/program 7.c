/* 1	for n=6
 * 12
 * 111
 * 1234
 * 11111
 * 123456 */
#include <stdio.h>
 
 int main()
 {
 	int n;
 	printf("enter the value of n:");
 	scanf("%d",&n);
 	for(int i=1;i<n;i+=2)
 	{	
 		for(int j=1;j<=i;j++)
 		{
 			printf("1 ");
 		}
 		printf("\n");
 		for(int j=1;j<=i+1;j++)
 		{
 			printf("%d ",j);
 		}
 		printf("\n");
 	}
 	if(n*2!=0)
 	{
		for(int i=1;i<=n;i++)
		{
			printf("1 ");
		}
	}
	return 0;
 }
	
