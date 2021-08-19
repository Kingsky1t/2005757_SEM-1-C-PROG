/*WAP to take an even sized array as input and make two pointers
 * at the begining and at the middle and print elements consequtively*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the array length(must be even):");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements");
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int *p=arr;
	int *q=arr+n/2;
	for(int i=0;i<n/2;i++){
		printf("%d %d ",*(p+i),*(q+i));
	}
	return 0;
}
