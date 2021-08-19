/*Write a recurssive funtion to find the factorial of a number*/
#include <stdio.h>

int fac(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int ans=fac(n);
	printf("the value of %d! is %d",n,ans);
	return 0;
}
