/*WAP to input any number and return the index of that number*/
#include <stdio.h>

int main(){
	int arr[8]={2,5,6,4,9,8,1,7};
	int n,f=0;
	printf("enter the number to search:");
	scanf("%d",&n);
	for(int i=0;i<8;i++){
		if(arr[i]==n){
			printf("%d is found at index %d",n,i+1);
			f=1;
			break;
		}
	}
	if(f==0){
		printf("%d is not found",n);
	}
	return 0;
}
