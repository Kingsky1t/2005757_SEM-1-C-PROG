/*WAP to take an integer array and find the maximum element using
 * pointers*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	int *p=arr;
	printf("enter the elements:     ");
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
	}
	int max=*p;
	for(int i=0;i<n;i++){
		if(*(p+i)>max){
			max=*(p+i);
		}
	}
	printf("maximum element is %d",max);
	return 0;
}
