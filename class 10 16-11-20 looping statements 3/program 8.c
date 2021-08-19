/*WAP to find the reverse of a number using a for loop.*/
#include <stdio.h>

int main(){
	int n,d=0,rev=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(;n!=0;){
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	printf("the reverse is %d",rev);
	return 0;
}
