/*write a function to find the gcd of two numbers
 * where it accepts two numbers and returns one*/
#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
	int r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=b%a;
	}
	return b;
}

int main(){
	int a,b,ans;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	if(a>b)
	ans=gcd(a,b);
	else
	ans=gcd(b,a);
	printf("the gcd of %d and %d is %d",a,b,ans);
	return 0;
}
