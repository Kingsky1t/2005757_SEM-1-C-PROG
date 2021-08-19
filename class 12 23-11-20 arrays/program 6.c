/*WAP to input and array and reverse it.*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter an element:");
		scanf("%d",&arr[i]);
	}
	if(n%2==0){
		for(int i=0;i<n/2;i++){
			int temp=arr[i];
			arr[i]=arr[n-1-i];
			arr[n-1-i]=temp;
		}
	}
	else{
		for(int i=0;i<(n-1)/2;i++){
			int temp=arr[i];
			arr[i]=arr[n-1-i];
			arr[n-1-i]=temp;
		}
	}
	printf("rearranged array:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
