/*WAp to input a string and make changes as per following:
 * input:ABCDEF
 * output:CBAFED*/
#include <stdio.h>
#include <string.h>

int main(){
	char a[100],b[100],c[100];
	printf("enter the string:");
	scanf("%[^\n]",a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		strcpy(b+i,a+len-i-1);
	}
	strcpy(c,b+(len/2));
	strcpy(c+(len/2),b);
	printf("\nthe formatted string is:");
	for(int i=0;i<len;i++){
		printf("%c",c[i]);
	}
	return 0;
}
