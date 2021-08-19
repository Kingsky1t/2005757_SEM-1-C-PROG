/*WAP to display 1,2,4,7,11,16,21,....,100 using goto statement*/
#include <stdio.h>

int main(){
	int n=1,x=1;
	label:	
	if(n<=100){
		printf("%d ",n);
		n+=x;
		x+=1;
		goto label;
	}
	return 0;
}
