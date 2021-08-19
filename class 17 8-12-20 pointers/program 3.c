/*WAP to test the use of pointers in array*/
#include <stdio.h>

int main(){
	int arr[5];
	printf("enter 5 numbers:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);  //&a[i]
	}
	printf("the numbers are:");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);	//a[i]
	}
	
	printf("\nenter 5 numbers:");
	for(int i=0;i<5;i++){
		scanf("%d",arr+i);  //a+i
	}
	printf("the numbers are:");
	for(int i=0;i<5;i++){
		printf("%d ",*(arr+i));  //*(a+i)
	}
	return 0;
}
