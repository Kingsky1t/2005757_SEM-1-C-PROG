/*WAP to input a number in unsigned char and 
interchange the 4bits*/
#include <stdio.h>

int main()
{
	unsigned char a;
	printf("Enter a number:");
	scanf("%u",&a);
	printf("original number: %x\n",a);
	int b=a&0x0f;
	b=b<<4;
	int c=a&0xf0;
	c=c>>4;
	int d=b|c;
	printf("new number: %x",d);
	return 0;
}
