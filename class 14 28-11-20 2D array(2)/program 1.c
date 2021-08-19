/*WAP to enter a number and array with a number with a gap of 
 * three in foward and reverse manner and another in which the first
 *  half is repeated in 3nd half(even size array)*/
#include <stdio.h>

int main(){
	int n,len;
	printf("enter the starting number:");
	scanf("%d",&n);
	printf("enter the number of elements:");
	scanf("%d",&len);
	int arr[len],x=n;
	
	for(int i=0;i<len;i++){
		arr[i]=x;
		x+=3;
	}
	printf("the resultant array is:");
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	x=n;
	for(int i=0;i<len;i++){
		arr[len-1-i]=x;
		x+=3;
	}
	printf("the resultant array is:");
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	if(len%2==0){
		x=n;
		for(int i=0;i<(len/2);i++){
			arr[i]=x;
			arr[(len/2)+i]=x;
			x+=3;
		}
		printf("the resultant array is:");
		for(int i=0;i<len;i++){
			printf("%d ",arr[i]);
		}
	}
	else{
		printf("3rd output not possibe enter even size array limit");
	}
	return 0;
}
	
	
