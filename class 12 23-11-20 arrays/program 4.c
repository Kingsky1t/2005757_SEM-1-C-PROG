/*WAP to accept an even size array and reverse elements pairwise
 * eg. 297284-->922748*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the size of the array(must be even):");
	scanf("%d",&n);
	int arr[n];
	if(n%2==0){
		for(int i=0;i<n;i++){
			printf("enter an element:");
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i+=2){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		printf("rearranged array:");
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	}
	else{
		printf("wrong input");
	}	
	return 0;
}
