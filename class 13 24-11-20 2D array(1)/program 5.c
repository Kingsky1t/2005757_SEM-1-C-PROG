/*WAP to input a matrix and display upper and lower triangles*/
#include <stdio.h>

int main(){
	int m,n;
	printf("enter the no. of rows and columns:");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter an element:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("triangle below diagonal:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j<i){
				printf("%3d ",arr[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("triangle above diagonal:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j>i){
				printf("%3d ",arr[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
		
