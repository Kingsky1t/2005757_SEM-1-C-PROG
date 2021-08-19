/*WAP to enter two numbers and do the operation as told(+*-/%*) */
#include <stdio.h>

int main()
{
	int a,b,ans=0;
	char c;
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	printf("enter the character (+*-/%%*):");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':
		ans=a+b;
		break;
		
		case'-':
		ans=a-b;
		break;
		
		case '*':
		ans=a*b;
		break;
		
		case '/':
		ans=a/b;
		break;
		
		case '%':
		ans=a%b;
		break;
		
		default:printf("wrong input");
	}
	printf("the result is:%d",ans);
	return 0;
}
