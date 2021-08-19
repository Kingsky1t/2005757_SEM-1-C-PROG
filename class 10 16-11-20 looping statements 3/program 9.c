/*WAP to find whether a number is prime or not using for loops*/
#include <stdio.h>

int main(){
	int n,c=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
			c++;
	}
	if(c==2)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
	return 0;
}
