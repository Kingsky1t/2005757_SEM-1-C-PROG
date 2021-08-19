/*WAP to take two numbers and display all the numbers between
 them in ascending or descending order as per the user input*/
#include <stdio.h>

int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	while(a<=b)
	{
		printf("%d ",a);
		a+=1;
	}
	while(a>=b)
	{
		printf("%d ",a);
		a-=1;
	}
	return 0;
}		
