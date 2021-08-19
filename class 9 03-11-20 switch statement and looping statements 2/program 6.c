/*WAP to enter a day number and print the calander for 
the whole month from that day onwards*/
#include <stdio.h>

int main()
{
	int n,i=1,j=1;
	printf("enter the day number:");
	scanf("%d",&n);
	printf("Sun\tMon\tTue\tWed\tThurs\tFri\tSat\n");
	switch(n)
	{	
		case 1:
		break;
		case 2:printf(" \t");
		break;
		case 3:printf(" \t \t");
		break;
		case 4:printf(" \t \t \t");
		break;
		case 5:printf(" \t \t \t \t");
		break;
		case 6:printf(" \t \t \t \t \t");
		break;
		case 7:printf(" \t \t \t \t \t \t");
		break;
		default:printf("wrong choice");
	}
	if(n<=7)
	{	
		while(n<=7)
		{
			printf("%d\t",i);
			n+=1;
			i+=1;
		}
		printf("\n");
		while(i<=31)
		{
			while(j<=7 && i<=31)
			{
				printf("%d\t",i);
				i+=1;
				j+=1;
			}
			printf("\n");
			j=1;
		}		
	}
	return 0;
}
