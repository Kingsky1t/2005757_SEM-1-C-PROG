/*Write a function to identify whteher the given
 *  number is prime or not by returning 0 or 1*/
#include <stdio.h>

int prime(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count+=1;
		}
	}
	if(count==2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n,x;
	printf("enter a number:");
	scanf("%d",&n);
	x=prime(n);
	printf("the returned value is %d",x);
	return 0;
}

