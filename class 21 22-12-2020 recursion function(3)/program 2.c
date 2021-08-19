/*Write a recursive function to display the digits of a number 
in forward and reverse order.*/
#include <stdio.h>

void forward(int n){
	int d;
	if(n!=0){
		d=n%10;
		printf("%d",d);
		forward(n/10);
	}
	return;
}
int rev=0;
void reverse(int n){
	int d;
	if(n!=0){
		d=n%10;
		rev*=10+d;
		printf("%d",d);
		reverse(n/10);
	}
	return;
}
	
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("in reverse order:");
	reverse(n);
	printf("\nin forward order:");
	forward(rev);
	return 0;
}
	
