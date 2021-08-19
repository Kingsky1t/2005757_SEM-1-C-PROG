/*WAP to take an array of any size and pair up the elements from the middle
 * eg. 596314-->639154*/
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
		for(int i=(n-1)/2;i>=0;i--){
			printf("%d %d ",arr[i],arr[n-1-i]);
		}
	}
	else{
		printf("%d ",arr[n/2]);
		for(int i=(n-2)/2;i>=0;i--){
			printf("%d %d ",arr[i],arr[n-1-i]);
		}
	}
	return 0;
}
