/*write a function to enter a 1D array and return the number of 
 * even integers and number of odd integers.*/
#include <stdio.h>

void count(int *q,int size,int *ec,int *oc){
	int i=0;
	while(i<size){
		if(*(q+i)%2==0)
			*ec+=1;
		else
			*oc+=1;
		i+=1;
	}
}

int main(){
	int ec=0,oc=0,n;
	printf("enter tthe limit of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	count(arr,n,&ec,&oc);
	printf("the number of odd and even integers are %d and %d respectively",oc,ec);
	return 0;
}
