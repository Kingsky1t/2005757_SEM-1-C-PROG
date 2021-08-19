/*WAP to enter a word and switch the letters of both side
 *  from the ends to middle
 * input- ABCD
 * otput- DCBA*/
#include <stdio.h>

int main(){
	char arr[100];
	printf("enter the string:");
	scanf("%[^\n]",arr);
	int count=0;
	for(int i=0;i<100 && arr[i]!='\0';i++){
		count++;
	}
	for(int i=0;i<count/2;i++){
		char temp=arr[i];
		arr[i]=arr[count-1-i];
		arr[count-1-i]=temp;
		printf(":");
	}
	printf("rearranged string:");
	for(int i=0;i<count;i++){
		printf("%c",arr[i]);
	}
	return 0;
}
