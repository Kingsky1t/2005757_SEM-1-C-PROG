/*WAP to ask the user for the coordinates of an element and print 
the elements surrounding it*/
#include <stdio.h>

int main(){
	int m,n;
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	printf("the matrix:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("enter the coordinates:");
	scanf("%d%d",&m,&n);
	printf("the nearby elements are:");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if((i==m+1 || i==m||i==m-1) &&(j==n-1||j==n||j==n+1)) {
		//	if(((i==m+1 || i==m-1 ) && (j>=n-1 && j<=n+1))||((j==n+1 || j==n-1) && (i>=m-1 && i<=m+1))){
				printf("%d ",arr[i][j]);
			}
		}
	}
	return 0;
}
