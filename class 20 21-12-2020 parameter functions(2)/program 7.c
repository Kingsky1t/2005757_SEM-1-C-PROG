/*Write a funtion that eill reverse a string*/
#include <stdio.h>
#include <string.h>

void rev(char *p,char *q){
	int i=0;
	int size=strlen(p);
	while(*(p+i)!='\0'){
		*(q+i)=*(p+size-i-1);
		i+=1;
	}
}

int main(){
	char str[100],r[100];
	printf("enter a string:");
	scanf("%s",str);
	rev(str,r);
	printf("%s",r);
	return 0;
}
