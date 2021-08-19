/*WAP to check and try the four given functions
 * strlen, strcpy, strcat, strcmp*/
#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("enter a string:");
	scanf("%[^\n]",str);
	int len = strlen(str);
	printf("the length of the string is %d\n",len);
	
	char str1[100];
	strcpy(str1,str);
	printf("the copied string:");
	for(int i=0;i<len;i++){
		printf("%c",str1[i]);
	}
	
	strcat(str1,str);
	printf("\nthe concatinated string:");
	for(int i=0;i<len*2;i++){
		printf("%c",str1[i]);
	}
	
	int n = strcmp(str1,str);
	printf("\n%d",n);
	
	return 0;
}
	
