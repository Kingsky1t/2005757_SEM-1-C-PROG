/*WAP to recieve a string and display it in forward and reverse order*/
#include <stdio.h>

int main(){
	char arr[100];
	printf("enter the string:");
	scanf("%[^\n]",arr);
	printf("in forward direction:%s",arr);
	int count=0;
	for(int i=0;1 && arr[i]!='\0';i++){
		count++;
	}
	printf("\nin backward direction:");
	for(int i=0;i<count;i++){
		printf("%c",arr[count-1-i]);
	}
	return 0;
}
