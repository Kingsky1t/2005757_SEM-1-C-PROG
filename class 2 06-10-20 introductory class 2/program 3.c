/*WAP to input three numbers and find the pattern
		x
	y		y^2
z		z^2		z^3
	y		y^2
		x					*/
		
#include <stdio.h>

int main()
{
	int x,y,z;
	printf("Enter the values of x,y,z:");
	scanf("%d %d %d",&x,&y,&z);
	printf("\t%d\n",x);
	printf("   %d\t    %d\n",y,y*y);
	printf("%d\t%d\t%d\n",z,z*z,z*z*z);
	printf("   %d\t    %d\n",y,y*y);
	printf("\t%d\n",x);
	return 0;
}
