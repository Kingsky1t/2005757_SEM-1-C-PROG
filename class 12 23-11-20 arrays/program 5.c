/*WAP to take an even sized array and check pairwise. If the first element
 * is less than second element then do not change else it changes
 * 297284-->292748*/
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
		for(int i=0;i<n-1;i+=2){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
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
