/*WAP to print the pascal's triangle
 */
 #include <stdio.h>
 
 int main()
 {
 	int n;
 	printf("enter the value of n:");
 	scanf("%d",&n);
 	for(int i=0;i<=n;i++)
 	{
 		for(int j=n-1;j>=i;j--)
 		{
 			printf("  ");
 		}
 		for(int j=0;j<=i;j++)
 		{
	 		int n=1,r=1,nr=1;
			for(int x=1;x<=i;x++){
				n*=x;
			}
			for(int x=1;x<=j;x++){
				r*=x;
			}
			for(int x=1;x<=i-j;x++){
				nr*=x;
			}
 			printf("%d   ",n/(r*nr));
 		}
 		printf("\n");
 	}
 	return 0;
 }
