/*WAP to input any number and find its index in 
 * a 2D array also find its frequncy*/
#include <stdio.h>

int main(){
	int n;
	int arr[5][5]={{2,3,7,5,6},{9,1,8,6,4},{3,4,7,2,6},{1,2,4,8,6},{9,8,2,4,6}};
	printf("enter an element:");
	scanf("%d",&n);
	int count=0;
	printf("the element is found at:");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]==n){
				printf("(%d,%d),",i,j);
				count+=1;
			}
		}
	}
	printf("\nthe frequency of the element is:%d",count);
	return 0;
}
