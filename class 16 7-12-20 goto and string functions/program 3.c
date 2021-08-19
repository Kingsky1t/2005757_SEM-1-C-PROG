/*WAP to display each digit of a number using goto statement*/
#include <stdio.h>

int main(){
	int n;
	printf("enter a value :");
	scanf("%d",&n);
	int a=n;
	printf("the digits are:");
	label:
	if(a!=0){
		printf("%d ",a%10);
		a=a/10;
		goto label;
	}
	return 0;
}
