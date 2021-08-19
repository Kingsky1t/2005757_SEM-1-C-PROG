/*Write a function to accept a 2D array and return the minimum
 * element present in each row of the array.*/
#include <stdio.h>

int minimum(int *p,int n){
	int min=*p;
	for(int i=0;i<n;i++){
		if(*(p+i)<min)
			min=*(p+i);
	}
	return min;
}		

void calc(int *p,int m,int n){
	int x;
	for(int i=0;i<m;i++){
		x=minimum(&(*(p)+i),n);
		printf("minimum of row no. %d is %d",i,x);
	}
}
		
int main(){
	int m,n;
	printf("enter the number of rows and columns:");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	calc(arr,m,n);
	return 0;
}
