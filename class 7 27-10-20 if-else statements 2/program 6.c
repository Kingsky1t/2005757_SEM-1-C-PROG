/*WAP to enter a two digit number and print it in words*/
#include <stdio.h>

int main()
{
	int n,d1,d2;
	printf("Enter a two digit number:");
	scanf("%d",&n);
 	d1=n/10;
 	d2=n%10;
 	if(d1!=1)
 	{
 		switch(d1)
 		{
 			case 2:printf("twenty-");
 			break;
 			case 3:printf("thirty-");
 			break;
 			case 4:printf("forty-");
 			break;
 			case 5:printf("fifty-");
 			break;
 			case 6:printf("sixty-");
 			break;
 			case 7:printf("seventy-");
 			break;
 			case 8:printf("eighty-");
 			break;
 			case 9:printf("ninety-");
 			break;
 			default:printf("wrong input");
 			goto end;
 		}
 		switch(d2)
 		{
 			case 1:printf("one");
 			break;
 			case 2:printf("two");
 			break;
 			case 3:printf("three");
 			break;
 			case 4:printf("four");
 			break;
 			case 5:printf("five");
 			break;
 			case 6:printf("six");
 			break;
 			case 7:printf("seven");
 			break;
 			case 8:printf("eight");
 			break;
 			case 9:printf("nine");
 			break;
 			default:printf("wrong input");
 			goto end;
 		}
 	}
 	else
 	{
 		switch(d2)
 		{
 			case 0: printf("tem");
 			break;
 			case 1:printf("eleven");
 			break;
 			case 2:printf("twelve");
 			break;
 			case 3:printf("thirteen");
 			break;
 			case 4:printf("fourteen");
 			break;
 			case 5:printf("fifteen");
 			break;
 			case 6:printf("sixteen");
 			break;
 			case 7:printf("seventeen");
 			break;
 			case 8:printf("eighteen");
 			break;
 			case 9:printf("nineteen");
 			break;
 			default:printf("wrong input");
 		}
 	}
 	end:
 	return 0;
 }
 		
 		
