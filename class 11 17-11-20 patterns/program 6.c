/*1	for n=5
 *21
 *321
 *4321
 *54321	*/
#include <stdio.h>
 
 int main()
 {
 	int n;
 	printf("enter the value of n:");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{	
		for(int j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
 	}
 	return 0;
 }
