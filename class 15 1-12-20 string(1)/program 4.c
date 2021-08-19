/*WAP to reciece a string and display the second word*/
#include <stdio.h>

int main(){
	char arr[100];
	printf("enter the string:");
	scanf("%[^\n]",arr);
	int i=0,count=0;
	while(arr[i]!='\0'){
		if(arr[i]==' ' && arr[i+1]!=' '){
			break;
		}
		count+=1;
		i++;
	}
	printf("the second word is:");
	for(i=1;arr[count+i]!=' ';i++){
		printf("%c",arr[count+i]);
	}
	return 0;
}
