/*WAP to input a positive even integer and display the 
 *pair of two prime numbers whose sum is the given number*/
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

void calc(int n){
	for(int i=1;i<=n/2;i++){
		if(prime(i)==1 && prime(n-i)==1){
			printf("%d %d",i,n-i);
		}
	}
}

int main(){
	int n;
	printf("enter a positive even integer:");
	scanf("%d",&n);
	printf("all possible prime pairs whose sum is equal to %d\n",n);
	calc(n);
	return 0;
}
	
	
