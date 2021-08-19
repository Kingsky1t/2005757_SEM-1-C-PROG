/*WAP to input a 3x3 matrix and check whether it is a magix matrix or 
 * not*/
#include <stdio.h>

int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("enter an element:");
			scanf("%d",&arr[i][j]); 
		}
	}
	int sumr=0;int sumc=0;int sumd1=0;int sumd2=0;
	int f=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sumr+=arr[i][j];
			sumc+=arr[j][i];
		}
		sumd1+=arr[i][i];
		sumd2+=arr[i][2-i];
		if(sumr!=sumc){
			f=1;
			break;
		}
		sumc=sumr=0;
	}
	if(sumd1==sumd2 && f==0){
		printf("the matrix is magic matrix");
	}
	else{
		printf("the matrix is not magic matrix");
	}
	return 0;
}
	
	
	
	
	
	
