/*WAP to enter a four digit number then swap odd
position digit(counting from back)
input:1234
output:1432*/
#include <stdio.h>

int main()
{
	int n,a,d1,d2,num=0;
	printf("enter a four digit number:");
	scanf("%d",&n);
	a=n;
	d1=a%10;
	d2=((a%1000)/100);
	num=((a/1000)*1000)+(d1*100);
	num+=((a%100)/10)*10+d2;
	printf("the new number is:%d",num);
	return 0;
}
		
