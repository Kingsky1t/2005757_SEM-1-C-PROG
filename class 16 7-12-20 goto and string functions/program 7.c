/*WAP to inverse a string by using string functions 
 * (same as q9)*/
#include <stdio.h>
#include <string.h>

int main(){
	char a[100],b[100];
	printf("enter the string:");
	scanf("%[^\n]",a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		strcpy(b+i,a+len-i-1);
	}
	printf("\nthe reverse string is:");
	for(int i=0;i<len;i++){
		printf("%c",b[i]);
	}
	return 0;
}
