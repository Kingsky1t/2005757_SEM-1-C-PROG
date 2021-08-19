/*WAP to display the reverse of an array using goto statement*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n], i;
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	i=0;
	label:
	if(i<n){
		printf("%d ",arr[n-1-i]);
		i++;
		goto label;
	}
	return 0;
}
