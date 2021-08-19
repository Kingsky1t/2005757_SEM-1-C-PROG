/*WAP to take an array and initialize it during declaration. Take the sumation of 
 * even elements and the multiplication of odd elements present in the array*/
#include <stdio.h>

int main(){
	int arr[]={5,6,4,9,3,1};
	int len=sizeof(arr)/sizeof(arr[0]);
	int sum=0,mul=1;
	for(int i=0;i<len;i++){
		if(arr[i]%2==0){
			sum+=arr[i];
		}
		else{
			mul*=arr[i];
		}
	}
	printf("sum of even terms: %d",sum);
	printf("\nprodect of odd terms: %d",mul);
	return 0;
}
