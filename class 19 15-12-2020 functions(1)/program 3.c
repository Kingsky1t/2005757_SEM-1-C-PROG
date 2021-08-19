/*Write a function to take an integer and return 
 *the sum of all the digits present in the number.         */
#include <stdio.h>

int sum(int n){
	int d,s=0;
	while(n!=0){
		d=n%10;
		n=n/10;
		s+=d;
	}
	return s;
}
int main(){
	int n,s;
	printf("enter a number:");
	scanf("%d",&n);
	s=sum(n);
	printf("the sum og digits is %d",s);
	return 0;
}
	
