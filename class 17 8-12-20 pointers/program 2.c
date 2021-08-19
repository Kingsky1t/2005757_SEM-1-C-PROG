/*WAP to take three variables and 3 pointers and add the 3 numbers 
 * by using the pointers*/
#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	int *x=&a;
	int *y=&b;
	int *z=&c;
	int sum=*x+*y+*z;
	printf("the sum of %d,%d and %d is %d",a,b,c,sum);
	return 0;
}
