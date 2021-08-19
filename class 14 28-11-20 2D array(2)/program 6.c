/*WAP to take any array and determine the frequency of
 * each digits*/
#include <stdio.h>

int main(){
	int n,count=0;
	int arr[8]={2,5,6,5,3,2,6,2};
	printf("enter the number to search:");
	scanf("%d",&n);
	for(int i=0;i<8;i++){
		if(arr[i]==n){
			count+=1;
		}
	}
	printf("the frequency of %d is %d.",n,count);
	return 0;
}
