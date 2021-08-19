/*WAP to take a string and print patterns according to the eg.
 * input- ABCD\O
 * output 1-ABCD output 2-	D	output 3-	DCBA
 * 			BCD	        	CD				CBA
 * 			CD				BCD				BA
 * 			D				ABCD			A   */
#include <stdio.h>

int main(){
	int n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	getchar();
	char arr[n+1];
	char *p=arr;
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%c",p);
		p+=1;
	}
	*(p)='\0';
	p=arr;
	
	printf("pattern 1\n");
	for(int i=0;i<n;i++){
		printf("%s\n",p+i);
	}
	
	printf("pattern 2\n");
	for(int i=n-1;i>=0;i--){
		printf("%s\n",p+i);
	}
	
	printf("pattern 3\n");
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i;j++){
			printf("%c",*(p+i-j));
		}
		printf("\n");
	}
	return 0;
}
