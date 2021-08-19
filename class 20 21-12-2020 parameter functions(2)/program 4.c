/*Write a function to accept a whole array and return 
 * the gcd of the whole array(we can use the function written in q2)*/
#include <stdio.h>

int gcd(int a,int b){
	int r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=b%a;
	}
	return b;
}

int gcdcount(int *q,int n){
	int i=0,g=*q;
	while(i<n-1){
		if(g>*(q+i+1)){
			g=gcd(g,*(q+i+1));
		}
		else{
			g=gcd(*(q+i+1),g);
		}
		i+=1;
	}
	return g;
}
		
int main(){
	int n;
	printf("enter tthe limit of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int ans=gcdcount(arr,n);
	printf("the gcd of the whole array is %d",ans);
	return 0;
}
