/*WAP to*/
#include <stdio.h>

int main(){
	char arr[20];
	char *p=arr;
	printf("enter 4 strings");
	for(int i=0;i<4;i++){
		scanf("%s",p+i*5);
	}
	char a[20];
	int x=0;	
	
	for(int i=0;i<4;i++){
		for(int j=i*5;arr[j]!='\0';j++){
			a[x]=arr[j];
			x+=1;
		}
	}
	a[x]='\0';
	printf("%s\n",a);
	
	
