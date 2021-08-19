/*WAP to display 10, 7, 4, 1 using goto statement*/
#include <stdio.h>

int main(){
	
	int n=10;
	label:
	printf("%d ",n);
	if(n!=1){
		n-=3;
		goto label;
	}
	return 0;
}
