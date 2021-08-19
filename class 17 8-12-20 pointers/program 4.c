/*WAP to take an array and a pointer pointing to an intermediate position
 * in the array and using that pointer*/
#include <stdio.h>

int main(){
	int arr[10];
	printf("enter 10 elements:");
	for(int i=0;i<10;i++){
		scanf("%d",arr+i);
	}
	printf("enter an index from 1 to 10:");
	int n;
	scanf("%d",&n);
	for(int i=n-1;i<10;i++){
		printf("%d ",*(arr+i));
	}
	return 0;
}
