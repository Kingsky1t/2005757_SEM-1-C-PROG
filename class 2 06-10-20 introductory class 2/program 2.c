/*WAP to find the value of the expression 4x^2+3y+5 */
#include <stdio.h>

int main()
{	
	int x,y;
	printf("enter the values of x and y:");
	scanf("%d %d",&x,&y);
	int val=(4*x*x)+(3*y)+5;
	printf("4x^2+3y+5=%d",val);
	return 0;
}
