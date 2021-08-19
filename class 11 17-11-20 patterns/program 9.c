/* 15 14 13 12 11
 * 7  8  9  10
 * 6  5  4
 * 2  3
 * 1
 * */
#include <stdio.h>
 
 int main()
 {
 	int c=15;
 	for(int i=5;i>=1;i--)
 	{	
 		if(i%2!=0)
 		{
 			for(int j=1;j<=i;j++)
 			{
 				printf("%d ",c);
 				c--;
 			}
 		}
 		else
 		{  	
 			int x=i;
 			for(int j=1;j<=i;j++)
 			{
 				printf("%d ",c+j-x);
 				x--;
 				c--;
 			}
 		}
 		printf("\n");
 	}
 	return 0;
 }
