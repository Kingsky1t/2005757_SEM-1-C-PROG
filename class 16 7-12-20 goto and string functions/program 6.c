/**/
#include <stdio.h>
#include <string.h>

int main(){
	char a[100],b[100];
	printf("enter the even sized string:");
	scanf("%[^\n]",a);
	int len = strlen(a);
	strcpy(b,a+(len/2));
	strcpy(b+(len/2),a);
	for(int i=0;i<len;i++){
		printf("%c",b[i]);
	}
	return 0;
}
