/*Write a function that will take a character array 
 * containing multiple arrays and return the number 
 * of srtings present in it.*/
#include <stdio.h>

int calc(char*p){
	int count=0;
	while(!(*p=='\0' && *(p+1)=='\0')){
		if(*p=='\0')
			count++;
	}
	return count;
}

int main(){
	char str="ABC;
	printf("enter a number of strings");
	scanf("%[^\n]",str);
	int ans=calc(str);
	printf("the number of stirng:%d",ans);
	return 0;
}
