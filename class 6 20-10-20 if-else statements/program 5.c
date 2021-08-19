/*WAP to accept time in 24-hour format and print it in 12-hour format*/
#include <stdio.h>

int main()
{
	int hr,min;
	printf("Enter the time in hh mm format:");
	scanf("%d%d",&hr,&min);
	if(hr>12 &&hr<24 && min<59 && min>=0)
	{
		printf("%d:%d PM",hr-12,min);
	}
	else if(hr<=12 && hr>0 && min<60 && min>=0)
	{
		printf("%d:%d AM",hr,min);
	}
	else if(hr==12 && min<60 && min>=0)
	{
		printf("12:%d PM",min);
	}
	else if(hr==0 && min<60 && min>=0)
	{
		printf("12:%d AM",min);
	}
	else 
	{
		printf("Wrong input");
	}
	return 0;
}
