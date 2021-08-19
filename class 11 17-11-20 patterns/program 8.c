/*15 14 13 12 11
 *10 9  8  7  
 *6  5  4
 *3  2
 *1				*/
#include <stdio.h>
 
 int main()
 {
 	int c=15;
 	for(int i=1;i<=5;i++)
 	{	
 		for(int j=5;j>=i;j--)
 		{
 			printf("%d ",c);
 			c--;
 		}
 		printf("\n");
 	}
 	return 0;
 }
