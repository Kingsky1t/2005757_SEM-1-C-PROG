/*WAP to test the pointers and its adresses*/
#include <stdio.h>
int main(){
	int x;
	int *y;
	printf("enter a number:");
	scanf("%d",&x);
	y=&x;
	printf("x=%d\n",x);
	printf("&x=%p\n",&x);
	printf("y=%p\n",y);
	printf("*y=%d\n",*y);
	return 0;
}
