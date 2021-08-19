/*Write a function to input a real number and return 
 * the first two digits after the decimal place*/
#include <stdio.h>

int dec(double n){
	n=n-(int)n;
	n*=100;
	return n;
}
int main(){
	double n;
	printf("enter a decimal number:");
	scanf("%lf",&n);
	int x=dec(n);
	printf("the first two decimal places are %d",x);
	return 0;
}
