/*WAP to enter a square matrix and display the diagonal*/
#include <stdio.h>

int  main(){
	int n;
	printf("enter the length of square matric:");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("enter the element:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the diagonal elements are:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i][i]);
	}
	return 0;
}
