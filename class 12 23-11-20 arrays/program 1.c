/*WAP to take an array of 5 elements and accept the elements from the user and display the 
array in forward and backward order*/
#include <stdio.h>

int main(){
	int n=5,arr[5];
	for(int i=0;i<n;i++){
		printf("enter an element:");
		scanf("%d",&arr[i]);
	}
	printf(" in forward order:");	
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n in backward order:");
	for (int i=0;i<n;i++){
		printf("%d ",arr[n-i-1]);
	}
	return 0;
}
