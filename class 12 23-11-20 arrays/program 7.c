/*WAP to enter an array and find the maximum and minimum elements present in it*/
#include <stdio.h>

int main(){
	int n,max,min;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter an element:");
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("maximum element is: %d",max);
	printf("\nminimum element is: %d",min);
	return 0;
}
