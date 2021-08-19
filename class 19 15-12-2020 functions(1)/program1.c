//Write a function to take 2 integers and return maximum of them
#include <stdio.h>

int max(int x,int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
int main(){
	int a,b,n;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	n=max(a,b);
	printf("the maximum between %d and %d is %d",a,b,n);
	return 0;
}
