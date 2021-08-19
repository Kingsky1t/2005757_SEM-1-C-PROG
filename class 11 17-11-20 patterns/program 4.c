/*1		for n=4
 *11
 *111
 *1111*/
#include <stdio.h>
 
 int main()
 {
 	int n;
 	printf("enter the value of n:");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{	
 		for(int j=1;j<=i;j++)
 		{
 			printf("1 ");
 		}
 		printf("\n");
 	}
 	return 0;
 }
