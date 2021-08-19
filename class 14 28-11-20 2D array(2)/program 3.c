/*WAP to enter a odd size square array and print any
 * of the triangles*/
#include <stdio.h>

int main(){
	int n=5;
	printf("enter the limit of array(must be odd):");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("enter an element:");
			scanf("%d",&arr[i][j]);
		}
	}
	
	//int arr[5][5]={{2,9,5,4,1},{7,2,8,9,3},{4,5,6,6,7},{2,1,0,9,8},{7,6,1,0,7}};
	
	int ch;
	printf("enter 0-upper 1-right 2-lower 3-left triangles:");
	scanf("%d",&ch);
	switch(ch){
		case 0: for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						if(j>=i && i+j<=n-1 && i<=(n-1)/2){
							printf("%d ",arr[i][j]);
						}
						else{
							printf("  ");
						}
					}
					printf("\n");
				}
				return 0;
				
		case 1: for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						if(j>=i && i+j>=n-1 && j>=(n-1)/2){
							printf("%d ",arr[i][j]);
						}
						else{
							printf("  ");
						}
					}
					printf("\n");
				}
				return 0;
		
		case 2:	for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						if(j<=i && i+j>=n-1 && i>=(n-1)/2){
							printf("%d ",arr[i][j]);
						}
						else{
							printf("  ");
						}
					}
					printf("\n");
				}
				return 0;
		
		case 3: for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						if(j<=i && i+j<=n-1 && j<=(n-1)/2){
							printf("%d ",arr[i][j]);
						}
						else{
							printf("  ");
						}
					}
					printf("\n");
				}
				return 0;
				
		default: printf("wrong input");
	}
	return 0;
}
