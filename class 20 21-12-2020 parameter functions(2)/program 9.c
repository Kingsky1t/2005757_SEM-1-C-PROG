/*Write a function to search for an element ina an array*/
#include <stdio.h>
int search(int *p,int n){
	int ser,i,flag=0;
	printf("enter the element to search:");
	scanf("%d",&ser);
	for(i=0;i<n;i++){
		if(ser==*(p+i)){
			flag=1;
			break;
		}
	}
	if(flag==0)
		return(-1);
	else
		return i;
}

int main(){
	int n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int ans=search(arr,n);
	if(ans==-1)
	printf("not found");
	else
	printf("the element is found at position %d",ans+1);
	return 0;
}

	
