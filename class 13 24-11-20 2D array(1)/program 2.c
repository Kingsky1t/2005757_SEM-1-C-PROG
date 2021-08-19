/*WAP to input a 2D array and display the array in matrix format*/
#include <stdio.h>

int  main(){
	int m,n;
	printf("enter the no. of rows and columns:");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter the element:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the array in matrix format:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
