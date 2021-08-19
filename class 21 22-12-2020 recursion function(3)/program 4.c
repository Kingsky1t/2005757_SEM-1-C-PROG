/*Write three recurssive funtions to display nth fibbonacci number,
display the series upto that number and also its reverse */
#include <stdio.h>


int fibnum(int a,int b, int i,int n){
	if(i==n){
		return a+b;
	}
	else{
		int sum=a+b;
		int num=fibnum(b,sum,i+1,n);
		return num;
	}
}

int fibfor(int a,int b, int i,int n){
	if(i==n){
		printf(" %d",a+b);
		return 0;
	}
	else{
		printf(" %d",a+b);
		fibfor(b,a+b,i+1,n);
		return 0;
	}
}

int fibback(int a,int b, int i,int n){
	if(i==n){
		printf(" %d",a+b);
		return a+b;
	}
	else{
		fibback(b,a+b,i+1,n);
		printf(" %d",a+b);
		return 0;
	}
}


int main(){
	
	int a=0,b=1,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("nth term of fibbonacci series is %d\n",fibnum(a,b,3,n));
	
	printf("\nin forward order:");
	if(n>=1)
	printf("0 ");
	if(n>=2)
	printf("1");
	fibfor(a,b,3,n);
	
	
	printf("\nin backward order:");
	fibback(a,b,3,n);
	if(n>=2)
	printf(" 1");
	if(n>=1)
	printf(" 0");
	return 0;
}
