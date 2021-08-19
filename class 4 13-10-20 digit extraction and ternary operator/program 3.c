/*WAP to enter a year and find whether it is 
a yeap year or not and print 1(for leap year) 
0(not not leap year)*/
#include <stdio.h>

int main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	int check=(year%400==0)||((year%4==0)&&(year%100!=0))?0:1;
	printf("%d",check);
	return 0;
}
