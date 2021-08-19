/*Write a function to call by refferernce and swap two inputs*/
#include <stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a,b;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("the swapped numbers are %d %d",a,b);
	return 0;
}
