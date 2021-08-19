/*WAP to enter a number in decimal and convert
into octal and hexadecimal */
#include <stdio.h>

int main()
{
	int a;
	printf("enter a decimal number:");
	scanf("%i",&a);
	printf("In octal system:%o\n",a);
	printf("In hexadecimal system:%x\n",a);
	return 0;
}
