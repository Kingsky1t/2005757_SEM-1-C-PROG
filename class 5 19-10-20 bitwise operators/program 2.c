/* WAP to enter a number and display all four 8 bit(1 byte) sets
convert to hexadecimal to check your answer*/
#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("%x\n",a);
	int b=a&0x000000FF;
	int c=a&0x0000FF00;
	c=c>>8;
	int d=a&0x00FF0000;
	d=d>>16;
	int e=a&0xFF000000;
	e=e>>24;
	printf("%x\t%x\t%x\t%x",e,d,c,b);
	return 0;
}
