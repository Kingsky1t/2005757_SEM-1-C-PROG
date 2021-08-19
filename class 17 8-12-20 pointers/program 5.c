/*WAP to use pointer to print an array in reverse order*/
#include <stdio.h>

int main(){
	int arr[10];
	int *p=arr;
	printf("enter ten elements:");
	for(int i=0;i<10;i++){
		scanf("%d",p);
		p++;
	}
	printf("in reverse order:");
	for(int i=0;i<10;i++){
		printf("%d ",*(p-1-i));
	}
	return 0;
}
