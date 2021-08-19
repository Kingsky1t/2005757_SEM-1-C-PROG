/*WAP to input any odd number and print the pattern
input-5
output-
0 0 1 0 0 
0 1 1 1 0 
1 1 1 1 1 
0 1 1 1 0 
0 0 1 0 0 
*/
#include <stdio.h>

int main(){
	int n;
	printf("enter an odd number length:");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j >= (n-1)/2 && i<=n/2 &&j<=n/2)			//second quadrant
				arr[i][j]=1;
			else if(i+j< (n+1)/2+(n-1) && i>=n/2 && j>=n/2)	//fourth quadrant	
				arr[i][j]=1;
			else if(j-i<=n/2 && i<=n/2 && j>=n/2)			//first quadrant
				arr[i][j]=1;
			else if(i-j<=n/2 && i>=n/2 && j<=n/2)			//third quadrant
				arr[i][j]=1;
			else
				arr[i][j]=0;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
				
