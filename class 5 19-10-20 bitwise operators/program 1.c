/*WAP to input an unsigned char and display the 
values of all 4 bits*/
#include <stdio.h>

int main()
{
	unsigned char c;
	printf("Enter a number:");
	scanf("%u",&c);
	int a=c&0x0F;
	int b=c&0xF0;
	b=b>>4;
	printf("%d\t%d",b,a);
	return 0;
}
