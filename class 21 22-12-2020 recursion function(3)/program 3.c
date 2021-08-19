/*Write a recurssive funtion to display 1,2,3,...,n
and n,n-1,.....,2,1*/
#include <stdio.h>

void forward(int n,int i){
	if(i==n){
		printf("%d ",i);
		return;
	}
	else{
		printf("%d ",i);
		forward(n,i+1);
	}
	return;
}
void backward(int n,int i){
	if(i==n){
		printf("%d ",i);
		return;
	}
	else{
		backward(n,i+1);
		printf("%d ",i);
	}
	return;
}

int main(){
	int n;
	printf("enter a value for n:");
	scanf("%d",&n);
	printf("forward series:");
	forward(n,1);
	printf("\nbackward series:");
	backward(n,1);
	return 0;
}
	
