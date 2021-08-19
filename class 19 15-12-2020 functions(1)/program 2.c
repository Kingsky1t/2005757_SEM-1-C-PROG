/*WAP to input an integer and display based on the input value in
 * the following manner
 * 4-->****   2-->**
 * 	   ***        *
 * 	   **
 * 	   *	                                                   */
#include <stdio.h>

void pattern(int n){
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("enter a value:");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
