/*WAP to convert decimal to binary with the help of an array*/
#include <stdio.h>

int main(){
	int arr[32];
	int n;
	printf("enter a decimal number:");
	scanf("%d",&n);
	int a=n,i=0;
	while(a!=1){
		arr[i]=a%2;
		i+=1;
		a/=2;
	}
	arr[i]=1;
	for(;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}
