/*WAP to input a number in intger form and 
interchange the 2nd and 3rd 8bits(1 byte)*/
#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("%x\n",a);
	int b=a&0x000000FF;
	int c=a&0x0000FF00;
	c=c<<8;
	int d=a&0x00FF0000;
	d=d>>8;
	int e=a&0xFF000000;
	int num=(((e|c)|d)|b);
	printf("new number %x",num);
	return 0;
}
