/*WAP to enter an array and reverse each sections keeping the middle
 * element same.
 * eg. 1964728-->6914827*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter an element:");
		scanf("%d",&arr[i]);
	}
	int temp;
	if(n%2==0){
		for(int i=0;i<n/4;i++){
			temp=arr[i];
			arr[i]=arr[n/2-1-i];
			arr[n/2-1-i]=temp;
			
			temp=arr[n/2+i];
			arr[n/2+i]=arr[n-1-i];
			arr[n-1-i]=temp;
		}
	}
	else{
		for(int i=0;i<(n+1)/4;i++){
			temp=arr[i];
			arr[i]=arr[(n-1)/2-1-i];
			arr[(n-1)/2-1-i]=temp;
			
			temp=arr[(n-1)/2+1+i];
			arr[(n-1)/2+1+i]=arr[n-1-i];
			arr[n-1-i]=temp;
		}
	}
	printf("the rearranged array is:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
