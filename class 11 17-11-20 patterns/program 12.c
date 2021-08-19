/*    1		for n=4
 *   2 2
 *  3 3 3
 * 4 4 4 4 */
#include <stdio.h>
 
 int main()
 {
 	int n;
 	printf("enter the value of n:");
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	{
 		for(int j=n-1;j>=i;j--)
 		{
 			printf("  ");
 		}
 		for(int j=1;j<=i;j++)
 		{
 			printf("%d   ",i);
 		}
 		printf("\n");
 	}
 	return 0;
 }
